from __future__ import print_function
# from pprint import pprint

import os
import sys
import time
import json
import random

"""
TODO:
    1) Additional tests for JSON log generation
    2) Create function for user to enter custom path to OCR install location
    3) Further testing for print_delay
"""


def abs_join(*args):
    """Joins individual path names, and returns the absolute path of those names"""
    return os.path.abspath(os.path.join(*args))


def print_delay(text, add_delay=0.0):
    """Prints out characters in text one by one with a slight random delay
    between each character"""

    try:
        list(text)
    except TypeError:
        text = str(text)

    for character in list(text):
        sys.stdout.write(character)
        sys.stdout.flush()
        time.sleep(random.randint(1,9) * 0.01)
    print()

    time.sleep(add_delay)


class TlmPathData:
    """Handles storage and retrieval of directory information"""

    def __init__(self):
        self.directory = os.path.abspath(os.path.join(
            os.path.dirname(sys.argv[0]), 'local_data'))
        self.paths_location = os.path.join(self.directory, 'tlm_paths.json')
        self.file_paths = self._path_information()

    def _path_information(self):
        """Returns json object containing all stored path information. If local
        data directory doesn't exist, generate_initial_directories is invoked"""
        if not os.path.isdir(self.directory) or not os.path.isfile(self.paths_location):
            self.generate_initial_directories()

        with open(self.paths_location, 'r') as f_obj:
            return json.load(f_obj)

    def update_paths(self, updated_path_data):
        """Updates path information"""
        with open(self.paths_location, 'w') as f_obj:
            json.dump(updated_path_data, f_obj, indent=4)

    def set_screenshots_path(self, update=False):
        """Sets initial user screen-shots path during initial directory file
        generation.  if update=True provided, user can manually change the path
        to their screen-shot folder."""

        if not update:
            user_path = input('NEW-USER: Screen-shot Folder Not Set - Please Enter Path: ')
            return os.path.abspath(user_path.replace('"', '').replace("'", ''))
        else:
            user_path = input('PATH-UPDATE: Please Enter New Screenshot Path:')
            self.file_paths['ocr']['screenshots'] = os.path.abspath(
                user_path).replace('"', '').replace("'", '')
            self.update_paths(self.file_paths)

    def generate_initial_directories(self):
        """Sets up default file directories and checks for tesseract-ocr install"""

        try:
            os.mkdir(self.directory)
            print_delay("Program data folder missing...", add_delay=0.5)
            print_delay("Generating default directory and files at : {}".format(self.directory))
        except FileExistsError:
            print_delay("Path data missing: generating default data file at: {}".format(
                self.paths_location))

        # Check for standard tesseract-ocr install locations
        home = os.path.expanduser('~')
        ocr_locations = (abs_join(home, 'AppData', 'Local', 'Tesseract-OCR'),
                         abs_join('C:', 'Program Files (x86)', 'Tesseract-OCR'),
                         abs_join('C:', 'Program Files', 'Tesseract-OCR'))
        ocr_path = next((path for path in ocr_locations if os.path.exists(path)), None)

        # Set default filenames and their all_tlm_paths
        path_information = abs_join(self.directory, 'tlm_paths.json')
        log_file = abs_join(self.directory, 'scan_logs.json')
        screenshots = self.set_screenshots_path()

        # set up dictionary to hold file information
        default_data = {"ocr": {'screenshots': screenshots,
                                'tesseract-ocr': ocr_path,
                                'tessdata': abs_join(ocr_path, 'tessdata')},

                        "logs": log_file,

                        "path_data_location": path_information}

        self.update_paths(default_data)


class ScanLogs:
    """Maintains logs of image conversions and output"""

    def __init__(self):
        self.TPD = TlmPathData()
        self.tlm_directory = self.TPD.directory
        self.tlm_paths = self.TPD.file_paths
        self._logs = self.logs

    @property
    def logs(self):
        """Returns dictionary containing log of scanned images and translated
        text"""
        if not os.path.isfile(self.tlm_paths['logs']):
            self._logs, self.logs = [], []

        with open(self.tlm_paths['logs'], 'r') as f_obj:
            self._logs = json.load(f_obj)
            return self._logs

    @logs.setter
    def logs(self, log_data):
        """Updates scan_logs.json with ocr-hex converted string"""
        if log_data:
            self._logs.append(log_data)

        with open(self.tlm_paths['logs'], 'w') as f_obj:
            json.dump(self._logs, f_obj, indent=4)

    def check_if_scanned(self, file):
        """Returns True if image not found in image log, otherwise returns false."""

        if any(file in files.keys() for files in self._logs):
            return True

        return False


if __name__ == '__main__':
    #TPD = TlmPathData().set_screenshots_path()
    print_delay('test sentence')
    print_delay('test')
