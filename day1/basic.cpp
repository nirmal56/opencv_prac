#include<iostream>
// #include"/usr/local/include/opencv4/opencv2/core/core.hpp"
#include"/usr/local/include/opencv4/opencv2/opencv.hpp"
// #include<opencv4/opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
int main(){
    Mat img;
	img=imread("cheta.png",IMREAD_GRAYSCALE);
    // cv2.resize
    namedWindow("mywindow",WINDOW_NORMAL);
	imshow("mywindow", img);
	waitKey(0);
    // destroyWindow("mywindow");
    // img=imread("cheta.png",IMREAD_COLOR);
	// imshow("Input1", img);
	// waitKey(0);
    // destroyWindow("input1");
	return 0;
}