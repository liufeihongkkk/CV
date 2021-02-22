#!/usr/bin/env python
#coding=utf-8
from PIL import Image
from PIL import Image,ImageEnhance
import pytesseract
im=Image.open('/home/pi/YoutubeChannel/recognize/title.png')
#print(text)
enhancer = ImageEnhance.Color(im)
enhancer = enhancer.enhance(0)
enhancer = ImageEnhance.Brightness(enhancer)
enhancer = enhancer.enhance(2)
enhancer = ImageEnhance.Contrast(enhancer)
enhancer = enhancer.enhance(8)
enhancer = ImageEnhance.Sharpness(enhancer)
im = enhancer.enhance(20)

file_handle=open('/home/pi/YoutubeChannel/recognize/1.txt',mode='w')

file_handle.write(pytesseract.image_to_string(im,"chi_sim").encode('utf-8'))
#print(pytesseract.image_to_string(im,"chi_sim"))
