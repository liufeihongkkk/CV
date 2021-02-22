#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

static int rgb2hsv_max(int a,int b,int c)
{
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	return max;
}
 
static int rgb2hsv_min(int a,int b,int c)
{
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	return min;
}
 
static int rgb2hsv(int r,int g,int b,int *h,int *s,int *v)
{
	int imax,imin,diff;
	imax = rgb2hsv_max(r,g,b);
	imin = rgb2hsv_min(r,g,b);
	diff = imax - imin;
	*v = imax;
	if(imax == 0)
		*s = 0;
	else
		*s = diff;
 
	if(diff != 0)
	{
		if(r == imax)
		{
			*h = 60 * (g - b) / diff;
		}
		else if(g == imax)
		{
			*h = 60 * (b - r) / diff + 120;
		}
		else
		{
			*h = 60 * (r - g) / diff + 240;
		}
 
		if(*h < 0)
			*h = *h + 360;
	}
	else
		*h = -1;
 
	return 0;
}
int main(){
	int a,b,c;
	FILE *fp;    //file operation
    fp = fopen ("/home/pi/YoutubeChannel/remove/ClickThePixel/rgb.txt","r");
    fscanf(fp,"%d %d %d",&a,&b,&c);
    printf("%d %d %d",a,b,c);
    fclose(fp);
	int h,s,v;
	rgb2hsv(a,b,c,&h,&s,&v);
	printf("%d %d %d",h,s,v);
	return 0;

}
