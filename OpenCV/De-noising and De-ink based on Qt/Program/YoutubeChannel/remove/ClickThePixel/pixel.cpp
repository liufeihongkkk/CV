
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "stdlib.h"
using namespace std;
using namespace cv;
void on_mouse(int EVENT, int x, int y, int flags, void* userdata);

int a,b,c;

int main()
{
    namedWindow("【display】");
    Mat src;
    src = imread("/home/pi/YoutubeChannel/remove/ClickThePixel/old.jpg");
    //cvtColor(src, src, COLOR_RGB2GRAY);
    setMouseCallback("【display】", on_mouse,&src);
    //以40ms刷新显示
    while (1)
    {  
        imshow("【display】", src);
        waitKey(40);
    }
    return 0;
}
void on_mouse(int EVENT, int x, int y, int flags, void* userdata)
    {
        Mat hh;
        hh = *(Mat*)userdata;
        Point p(x, y);
        switch (EVENT)
        {
            case EVENT_LBUTTONDOWN:
            {
				a=hh.at<Vec3b>(p)[0];
				b=hh.at<Vec3b>(p)[1];
				c=hh.at<Vec3b>(p)[2];
                printf("b=%d\t", hh.at<Vec3b>(p)[0]);
                printf("g=%d\t", hh.at<Vec3b>(p)[1]);
                printf("r=%d\n", hh.at<Vec3b>(p)[2]);
                circle(hh, p, 2, Scalar(255),3);
                FILE *fp;    //file operation
                fp = fopen ("rgb.txt","w");
                fprintf(fp,"%d %d %d",c,b,a);
                fclose(fp);
            }
            break;
        }
}
 
