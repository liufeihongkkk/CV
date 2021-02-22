#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
 
using namespace std;
using namespace cv;
 
//定义全局变量
Mat g_srcImage;         //定义输入图像
Mat g_dstImage;         //定义目标图像
 
const int g_nTrackbarMaxValue = 9;      //定义轨迹条最大值
int g_nTrackbarValue;                   //定义轨迹条初始值
int g_nKernelValue;                     //定义kernel尺寸（均值滤波时使用的模板）
 
void on_kernelTrackbar(int, void*);     //回调函数的声明
 
int main()
{
	g_srcImage = imread("old.jpg");
 
	/****************判断图像是否加载成功******************/
	if (g_srcImage.empty())
	{
		cout << "Image loading is error!" << endl;
		return -1;
	}
	else
		cout << "Image loading is successful!" << endl << endl;
 
 
	namedWindow("Before Image", WINDOW_NORMAL);    
	resizeWindow("Before Image", 640,480);
	imshow("Before Image", g_srcImage);
 
	
	char kernelName[20];//定义数组kernelName[20]用来存放轨迹条的名称
	sprintf(kernelName, "kernel Size %d", g_nTrackbarMaxValue);//sprintf_s()是C++中的一个输出函数，功能是将数据格式化输出到字符串中
	namedWindow("Mean filtering", WINDOW_NORMAL);//轨迹条依附窗口存在，所以创建窗口一定要在创建轨迹条之前
	//创建轨迹条
	createTrackbar(kernelName, "Mean filtering", &g_nTrackbarValue, g_nTrackbarMaxValue, on_kernelTrackbar);//opencv中的一个函数，功能是创建轨迹条
	on_kernelTrackbar(g_nTrackbarValue, 0);
 
	waitKey(0);
 
	return 0;
}
 
void on_kernelTrackbar(int, void*)//回调函数，简单理解为创建轨迹条后必须再建一个回调函数，格式固定：void XXXXX(int,void*){...}
{
	//根据输入值重新计算kernel尺寸
	g_nKernelValue = g_nTrackbarValue * 2 + 1;
	
	//均值滤波函数
	blur(g_srcImage, g_dstImage, Size(g_nKernelValue, g_nKernelValue));
     imwrite("new.png",g_dstImage);
	namedWindow("Mean Filtering", WINDOW_NORMAL);    
	resizeWindow("Mean Filtering", 640,480);
	imshow("Mean Filtering", g_dstImage);
}
