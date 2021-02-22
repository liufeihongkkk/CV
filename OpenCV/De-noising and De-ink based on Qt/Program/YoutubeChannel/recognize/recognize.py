from PIL import Image
import pytesseract

Image = Image.open('title.png')   
text = pytesseract.image_to_string(Image,lang='chi_sim').encode('utf-8')
file_handle=open('/home/pi/YoutubeChannel/recognize/1.txt',mode='w')
file_handle.write(text)