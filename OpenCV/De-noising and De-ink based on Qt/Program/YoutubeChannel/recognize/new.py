#coding=utf-8
from PIL import Image 
import pytesseract
def getMessage(path_name):
    text = pytesseract.image_to_string(path_name,lang='chi_sim')
    print(text)
def get_bin_table(threshold = 230):
	# 获取灰度转二值的映射table
	table = []
	for i in range(256):
		if i < threshold:
			table.append(0)
		else:
			table.append(1)
	return table
 
image = Image.open('/home/pi/YoutubeChannel/recognize/title.png')
imgry = image.convert('L')  # 转化为灰度图
table = get_bin_table()
out = imgry.point(table, '1')
getMessage(out)
