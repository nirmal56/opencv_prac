#include<iostream>
#include<opencv4/opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){
	Mat in;
	Mat out;
	in=imread("cheta.png", IMREAD_COLOR);
	GaussianBlur(in, out, Size(7,7), 3,3);
	imshow("In", in);
	imshow("Out", out);
	waitKey(0);
    return 0;
}