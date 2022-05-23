#include<iostream>
#include"/usr/local/include/opencv4/opencv2/opencv.hpp"
#include"/usr/local/include/opencv4/opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;
int main() {
   Mat frame;
   namedWindow("Video Player");

//sudo  adduser username video sudo usermod -a -G video username
//id -a

   VideoCapture cap(1000);
   while (true){ 
      cap >> frame;
      if (frame.empty()){
         break;
      }
      namedWindow("Video Player",WINDOW_AUTOSIZE);
      imshow("Video Player", frame);
      waitKey(250);
   }
//    cap.release();//Releasing the buffer memory//
   return 0;
}