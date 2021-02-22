#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
#include "opencv2/opencv.hpp"
 
using namespace std;
using namespace cv;
 
Mat org;
Mat img;
Mat imgROI;
Mat roiResize;
Mat tranPart;
 
int foo = 120;    //try one
int fooResize = 2 * foo;
 
void on_Mouse(int event, int x, int y, int flag, void*ustc) {
	Mat img_temp = img.clone();
	if (x>fooResize && x<img_temp.cols-fooResize && y>fooResize && y<img_temp.rows-fooResize) {
		imgROI = img_temp(Rect(x - foo, y - foo, 2 * foo, 2 * foo));
		tranPart = img_temp(Range(y - 2 * foo, y + 2 * foo), Range(x - 2 * foo, x + 2 * foo));
 
		resize(imgROI, roiResize, Size(2 * imgROI.cols, 2 * imgROI.rows));
		roiResize.copyTo(tranPart);
 
		circle(img_temp, Point(x, y), 10, Scalar(0, 0, 255), 1, 8, 0);
		imshow("img", img_temp);
	}
}
 
int main() {
	org = imread("/home/pi/YoutubeChannel/remove/ClickThePixel/old.jpg");
	img = org.clone();
	namedWindow("img", WINDOW_NORMAL);    
    resizeWindow("img", 1200,880);
	imshow("img", img);
	setMouseCallback("img", on_Mouse, 0);	
	waitKey(0);
}
