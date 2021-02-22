
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "stdlib.h"
using namespace cv;

int beta; /*control the brightness*/
int a,b,c; /*define the hsv range*/

int main(int argc,const char * argv[])
{
    Mat3b bgr = imread("/home/pi/YoutubeChannel/remove/old.jpg");
    Mat3b hsv;
    cvtColor(bgr, hsv, COLOR_BGR2HSV);
    printf("%d",hsv);
    Mat1b mask1, mask2,mask3,mask4,mask,mask5,mask6;
    
  //The initial range of HSV:
   inRange(hsv, Scalar(0, 70, 50), Scalar(10, 255, 255), mask1); 
   inRange(hsv, Scalar(170, 70, 50), Scalar(180, 255, 255), mask2);  //two lines for red color range
   if(1){
     inRange(hsv, Scalar(0, 0,200,0), Scalar(180, 255, 255,0), mask3);  //white color range
     mask = mask1 | mask2|mask3;
 }else{
      inRange(hsv, Scalar(0, 5,50,0), Scalar(360, 50, 255,0), mask4);  //gray color range
      mask = mask1 | mask2|mask4;}    

     imwrite("after.png",mask);
     
     namedWindow("Mask", WINDOW_NORMAL);    
     resizeWindow("Mask", 640,480);
    imshow("Mask", mask);
    waitKey();
    return 0;
}
