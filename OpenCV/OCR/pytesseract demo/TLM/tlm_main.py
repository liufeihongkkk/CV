import os
import string

from PIL import Image
from tlm_data import (TlmPathData, ScanLogs, print_delay)

try:
    import pytesseract
except ModuleNotFoundError:
    pass
    # print("Pytesseract Not Found")

"""
TODO:
    1) Add ability to ignore scan_log force re-scan of folder
        * Re-log the forced scans?
    2) Add function for printing out already translated images
    3) Add configuration option to always scan folder regardless if there is a
       log of that image being scanned (so user doesn't have to keep adding
       switch statements to force re-scan)
    4) Add option to print out the string tesseract converts prior to the conversion process
"""


class TesseractConfig:
    """Class for holding directory information specific to local ocr path and
    user screen-shots folder"""

    def __init__(self):
        self.TPD = TlmPathData()
        self.paths = self.TPD.file_paths['ocr']
        self.screenshots = self.paths['screenshots']
        self.tessdata = self.paths['tessdata']
        self.tessocr = self.paths['tesseract-ocr']


class TextConversion:
    """Class for manipulating and converting text retrieved from OCR process"""

    def __init__(self, ocr_text):
        self.ocr_text = ocr_text

    def __repr__(self):
        """Returns string containing all converted hexadecimal values found by translate_hex_values"""

        translation = self.translate_hex_values()
        known_characters = string.ascii_lowercase + '/.?, '

        # Replace unknown or missing characters with an asterisk
        return "".join([char if char.lower() in known_characters else '*' for char in translation])

    def ocr_text_cleanup(self):
        """Returns string retrieved from OCR process with various punctuation removed"""

        # ASCII punctuation and smart quotes, except characters / . ? ,
        delimiters = [char for char in list(string.punctuation + '“”‘’\n') if char not in '/.?,']
        return "".join([char if char not in delimiters else ' ' for char in self.ocr_text])

    def translate_hex_values(self):
        """Returns a string created from all hex values found in the ocr-image
        conversion"""

        translation = ''
        for characters in self.ocr_text_cleanup().split(' '):
            if len(characters) % 2 == 0:
                try:
                    int(characters, 16)
                    translation += bytes.fromhex(characters).decode('ascii')
                except ValueError:
                    pass

        return translation


def process_ocr(force=False):
    """Invokes tesseract-ocr and translate_hex_values(), after which, the
    converted text is displayed to the screen

    :param force: If True, all images will be scanned regardless if they've been processed previously.
                  force=True also skips the message/filename process

     """

    path = TesseractConfig()
    scan_logs = ScanLogs()

    skipped_files = 0
    tessdata = '--tessdata-dir "{}"'.format(path.tessdata)
    for file in os.listdir(path.screenshots):
        if force or not scan_logs.check_if_scanned(file):
            image = Image.open('{}\\{}'.format(path.screenshots, file))
            converted_text = TextConversion(pytesseract.image_to_string(image, config=tessdata))

            print(converted_text)
            if not force:
                scan_logs.logs = {file: str(converted_text)}
        else:
            skipped_files += 1

    print("\n----------Scan Complete-----------")
    if skipped_files:
        print_delay("{} Files Skipped (Already Scanned)".format(skipped_files))


def main():
    process_ocr(force=True)


if __name__ == '__main__':
    main()
