#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
 
using namespace std;
using namespace cv;
 
//����ȫ�ֱ���
Mat g_srcImage;         //��������ͼ��
Mat g_dstImage;         //����Ŀ��ͼ��
 
const int g_nTrackbarMaxValue = 9;      //����켣�����ֵ
int g_nTrackbarValue;                   //����켣����ʼֵ
int g_nKernelValue;                     //����kernel�ߴ磨��ֵ�˲�ʱʹ�õ�ģ�壩
 
void on_kernelTrackbar(int, void*);     //�ص�����������
 
int main()
{
	g_srcImage = imread("old.jpg");
 
	/****************�ж�ͼ���Ƿ���سɹ�******************/
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
 
	
	char kernelName[20];//��������kernelName[20]������Ź켣��������
	sprintf(kernelName, "kernel Size %d", g_nTrackbarMaxValue);//sprintf_s()��C++�е�һ����������������ǽ����ݸ�ʽ��������ַ�����
	namedWindow("Mean filtering", WINDOW_NORMAL);//�켣���������ڴ��ڣ����Դ�������һ��Ҫ�ڴ����켣��֮ǰ
	//�����켣��
	createTrackbar(kernelName, "Mean filtering", &g_nTrackbarValue, g_nTrackbarMaxValue, on_kernelTrackbar);//opencv�е�һ�������������Ǵ����켣��
	on_kernelTrackbar(g_nTrackbarValue, 0);
 
	waitKey(0);
 
	return 0;
}
 
void on_kernelTrackbar(int, void*)//�ص������������Ϊ�����켣��������ٽ�һ���ص���������ʽ�̶���void XXXXX(int,void*){...}
{
	//��������ֵ���¼���kernel�ߴ�
	g_nKernelValue = g_nTrackbarValue * 2 + 1;
	
	//��ֵ�˲�����
	blur(g_srcImage, g_dstImage, Size(g_nKernelValue, g_nKernelValue));
     imwrite("new.png",g_dstImage);
	namedWindow("Mean Filtering", WINDOW_NORMAL);    
	resizeWindow("Mean Filtering", 640,480);
	imshow("Mean Filtering", g_dstImage);
}
