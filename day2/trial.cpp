#include<iostream>
#include<opencv4/opencv2/opencv.hpp>

using namespace cv;

int main(){
    Mat A, C;                          // creates just the header parts

    A = imread("cheta.png", IMREAD_COLOR); // here we'll know the method used (allocate matrix)
    Mat B(A);                                 // Use the copy constructor
    imshow("A",A);
    imshow("B",B);
    C = A;                                    // Assignment operator


    Mat D (A, Rect(10, 10, 100, 100) ); // using a rectangle
    imshow("C",C);
    imshow("D",D);
    Mat E = A(Range::all(), Range(10,30)); // using row and column boundaries

    imshow("E",E);
    waitKey(0);
    return 0;
}