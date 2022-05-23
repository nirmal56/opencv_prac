#include<iostream>
#include"/usr/local/include/opencv4/opencv2/opencv.hpp"
#include"/usr/local/include/opencv4/opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;
int main(){
    int WIDTH = 1000, HEIGHT = 500;
    Mat frame;
    VideoCapture capture;
    capture.open("video.mp4");
    for(;;){
        capture>>frame;
        namedWindow("video", WINDOW_NORMAL);
        resizeWindow("video", WIDTH, HEIGHT);
        imshow("video",frame);
        if(waitKey(33)>0){break;}
        
    }
	return 0;
}