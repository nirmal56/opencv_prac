#include<opencv4/opencv2/opencv.hpp>
using namespace cv;
int main()
{
	Mat img_bgr, img_gry;
	img_bgr = imread("cheta.png");
	Canny(img_bgr, img_gry, 100, 100, 5, true);
	imshow("Win1", img_bgr);
	imshow("Win2", img_gry);
	waitKey(0);
	return 0;
}
