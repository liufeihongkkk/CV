#include <iostream>
#include <highgui.h>
#include "highgui.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <cv.h>
using namespace std;

// 卷积函数：cvFilter2D(const CvArr *src,CvArr *dst,const CvMat *kernel,CvPoint anchor = cvPoint(-1,-1))
// 填充卷积边界：cvCopyMakeBorder(const CvArr *src,CvArr *dst,CvPoint offset,int bordertype,CvScalar value = cvScalarAll(0))

int main(int argc,char *argv[])
{
   
   IplImage* img = cvLoadImage("/home/pi/YoutubeChannel/remove_mass/Other_Method/old.jpg");     //原始图图像 1
   //得到灰度化图像 g 1
   IplImage* g = cvCreateImage(cvSize(img->width,img->height),IPL_DEPTH_8U,1);
   cvCvtColor(img,g,CV_RGB2GRAY);
  // //测试工具
  // for (int i=0;i<(g->height);i++)
  // {
	 //  //r、p是指向图像数据首地址的指针，类型是无符号字符型
		//char *r=(char*)(g->imageData + i*g->widthStep);
		//for (int j=0;j<(g->width);j++)
		//{
		//	cout<<r[j]<<" ";
		//}
		//cout<<endl;
  // }

   IplImage* gg = cvCreateImage(cvSize(img->width,img->height),IPL_DEPTH_32F,1);  //输入用于计算的图像
   cvConvertScale(g,gg);

   IplImage* localMean = cvCreateImage(cvSize(img->width,img->height),IPL_DEPTH_32F,1);  //“均值” 具体解释见程序代码求解公式
   IplImage* localVar = cvCreateImage(cvSize(img->width,img->height),IPL_DEPTH_32F,1);   //“方差”
   IplImage* f = cvCreateImage(cvSize(img->width,img->height),IPL_DEPTH_32F,1);   //输出用于计算的图像

   /*得到滤波模板*/
   CvMat* mat = cvCreateMat(5,5,CV_32FC1);
   cvZero(mat);
   int row,col;
   for (row=0;row<mat->height;row++)
   {
	   float* pData=(float*)(mat->data.ptr+row*mat->step);//获取第row行的行首指针，因为数据类型为浮点型，因此，通过data.ptr与step获得的字节指针需要转换为float* 这样的指针
	   for (col=0;col<mat->width;col++)
	   {
		   *pData = 1;
		   pData++;//因为,指针后移一位，也即是指向下一个浮点数
	   }
   }
   float prod = 25;                              //滤波模板的数值和
   float sumlocalVar = 0;                    //方差和         

   /*得到原始图像与模板卷积后的图像*/
   IplImage* dst = cvCreateImage( cvGetSize(g), IPL_DEPTH_32F, 1 ); 
   cvFilter2D( g, dst, mat, cvPoint( -1, -1 ) );

   /*得到原始图像像素平方与模板卷积后的图像*/
   IplImage* grayImg32F2X = cvCreateImage( cvGetSize(g), IPL_DEPTH_32F, 1 );
   cvMul(gg,gg,grayImg32F2X );

   IplImage* dst2 = cvCreateImage( cvGetSize(grayImg32F2X), IPL_DEPTH_32F, 1 );
   cvFilter2D( grayImg32F2X, dst2, mat, cvPoint( -1, -1 ) );

   for (int i=0;i<(g->height);i++)
   {
	   //r、p是指向图像数据首地址的指针，类型是无符号字符型
		float *r=(float*)(dst->imageData + i*dst->widthStep);
		float *p=(float*)(localMean->imageData + i*localMean->widthStep);
		float *q=(float*)(dst2->imageData + i*dst2->widthStep);
		float *m=(float*)(localVar->imageData + i*localVar->widthStep);
		float *n=(float*)(f->imageData + i*f->widthStep);
		float *o=(float*)(gg->imageData + i*gg->widthStep);
		for (int j=0;j<(g->width);j++)
		{
			p[j] = r[j]/prod;               //为localMean像素赋值   wrong;
			m[j] = q[j]/prod - p[j]*p[j];   //为localVar像素赋值
			n[j] = o[j] - p[j];             //实现公式 f = g - localMean;
		}
   }


   float noise = 0;
   int count = 0;
   for (int i=0;i<(g->height);i++)
   {
	   //r、p是指向图像数据首地址的指针，类型是无符号字符型
		float *m=(float*)(localVar->imageData + i*localVar->widthStep);
		for (int j=0;j<(g->width);j++)
		{
			noise = noise + m[j];
			count++;
		}
   }
   noise = noise/count;   //求得噪声   is differet from Matlab value

   for (int i=0;i<(localVar->height);i++)
   {
       float *o=(float*)(gg->imageData + i*gg->widthStep);
	   float *m=(float*)(localVar->imageData + i*localVar->widthStep);
	   for (int j=0;j<(localVar->width);j++)
	   {
		   o[j] = m[j] - noise;       //实现公式 g = localVar - noise;      误差很大，不应该！
	   }
   }

   cvMaxS(gg,0,gg);                     //gg与0比，去较大值存入gg
   cvMaxS(localVar,noise,localVar);       //localVar与noise比，去较大值存入localVar
   cvDiv(f,localVar,f);               //f = f - localVa
   cvMul(f,gg,f);                      //f = f * gg
   cvAdd(f,localMean,f);              //f = f + localMean

   IplImage* ff = cvCreateImage(cvSize(img->width,img->height),IPL_DEPTH_8U,1);  //滤波后图像
   cvConvertScale(f,ff);

   cvNamedWindow ("Image", 1); 
   cvMoveWindow ("Image", 0, 0); 

   //The Code that need to be added(for saving image)
   cvSaveImage("new.png",ff);
   cvShowImage ("Image",ff);

   cvWaitKey (0);
   cvDestroyWindow ("Image");

   cvReleaseImage(&f);
   cvReleaseImage(&ff);
   cvReleaseImage(&img);
   cvReleaseImage(&localMean);
   cvReleaseImage(&localVar);
   cvReleaseImage(&g);
   cvReleaseMat(&mat);
   cvReleaseImage(&dst);
   cvReleaseImage(&grayImg32F2X);
   cvReleaseImage(&dst2);
   cvReleaseImage(&dst2);
}