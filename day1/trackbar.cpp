#include<iostream>
#include<opencv4/opencv2/opencv.hpp>
using namespace std;
using namespace cv;
VideoCapture capture;
int sliderpos=0, run=1, dontset=0;
void onTrackbarChange(int pos, void*)
{
	capture.set(CAP_PROP_POS_FRAMES, pos);
	if(!dontset) run=1;
	dontset=0;
}
int main()
{
	Mat frame;
	namedWindow("Window", WINDOW_NORMAL);
    // resizeWindow("Window", 1000, 500);
	capture.open("video.mp4");
	int frames = (int) capture.get(CAP_PROP_FRAME_COUNT);
	int height = (int) capture.get(CAP_PROP_FRAME_HEIGHT);
	int width =  (int) capture.get(CAP_PROP_FRAME_WIDTH);
	cout<<"The no. of frames in the video is : "<<frames<<" and the frame size is : "<<width<<"x"<<height;
	createTrackbar("Position","Window",&sliderpos,frames,onTrackbarChange);
	for(;;)
	{	if(run !=0)
		{
			capture>>frame;
			if(frame.empty()) break;
			int current_pos = (int)capture.get(CAP_PROP_POS_FRAMES);
			dontset=1;
			imshow("Window", frame);
			setTrackbarPos("Position","Window",current_pos);
			run-=1;
		}
		waitKey(33);
	}
	return 0;
}