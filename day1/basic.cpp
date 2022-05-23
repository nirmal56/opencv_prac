#include<iostream>
#include"/usr/local/include/opencv4/opencv2/core/core.hpp"
#include"/usr/local/include/opencv4/opencv2/opencv.hpp"
using namespace std;
using namespace cv;
int main(){
    Mat img;
	img=imread("cheta.png");
	imshow("Input", img);
	waitKey(0);
	return 0;
}