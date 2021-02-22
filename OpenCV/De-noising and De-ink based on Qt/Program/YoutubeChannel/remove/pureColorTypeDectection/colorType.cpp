#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgproc/imgproc_c.h>
 
#include <iostream>
#include <vector>
using namespace std;
using namespace cv;
 
int main(){
 
	Mat matSrc=imread("/home/pi/YoutubeChannel/remove/ColorTypeDectection/old.jpg",IMREAD_UNCHANGED);
	Mat matHsv;
	cvtColor(matSrc,matHsv,COLOR_BGR2HSV);
 
	vector<int> colorVec;
	colorVec.push_back(matHsv.at<uchar>(0,0));
	colorVec.push_back(matHsv.at<uchar>(0,1));
	colorVec.push_back(matHsv.at<uchar>(0,2));
 
	if((colorVec[0]>=0&&colorVec[0]<=180)
		&&(colorVec[1]>=0&&colorVec[1]<=255)
		&&(colorVec[2]>=0&&colorVec[2]<=46)){
 
			cout<<"黑"<<endl;
	}
	else if((colorVec[0]>=0&&colorVec[0]<=180)
		&&(colorVec[1]>=0&&colorVec[1]<=43)
		&&(colorVec[2]>=46&&colorVec[2]<=220)){
 
			cout<<"灰"<<endl;
	}
	else if((colorVec[0]>=0&&colorVec[0]<=180)
		&&(colorVec[1]>=0&&colorVec[1]<=30)
		&&(colorVec[2]>=221&&colorVec[2]<=255)){
 
			cout<<"白"<<endl;
	}
	else if(((colorVec[0]>=0&&colorVec[0]<=10)||(colorVec[0]>=156&&colorVec[0]<=180))
		&&(colorVec[1]>=43&&colorVec[1]<=255)
		&&(colorVec[2]>=46&&colorVec[2]<=255)){
 
			cout<<"红"<<endl;
 
	}
	else if((colorVec[0]>=11&&colorVec[0]<=25)
		&&(colorVec[1]>=43&&colorVec[1]<=255)
		&&(colorVec[2]>=46&&colorVec[2]<=255)){
 
			cout<<"橙"<<endl;
	}
	else if((colorVec[0]>=26&&colorVec[0]<=34)
		&&(colorVec[1]>=43&&colorVec[1]<=255)
		&&(colorVec[2]>=46&&colorVec[2]<=255)){
 
			cout<<"黄"<<endl;
	}
	else if((colorVec[0]>=35&&colorVec[0]<=77)
		&&(colorVec[1]>=43&&colorVec[1]<=255)
		&&(colorVec[2]>=46&&colorVec[2]<=255)){
 
			cout<<"绿"<<endl;
	}
	else if((colorVec[0]>=78&&colorVec[0]<=99)
		&&(colorVec[1]>=43&&colorVec[1]<=255)
		&&(colorVec[2]>=46&&colorVec[2]<=255)){
 
			cout<<"青"<<endl;
	}
	else if((colorVec[0]>=100&&colorVec[0]<=124)
		&&(colorVec[1]>=43&&colorVec[1]<=255)
		&&(colorVec[2]>=46&&colorVec[2]<=255)){
 
			cout<<"蓝"<<endl;
	}
	else if((colorVec[0]>=125&&colorVec[0]<=155)
		&&(colorVec[1]>=43&&colorVec[1]<=255)
		&&(colorVec[2]>=46&&colorVec[2]<=255)){
 
			cout<<"紫"<<endl;
	}
	else{
 
		cout<<"未知"<<endl;
	}
 
	getchar();
	return 0;
}
