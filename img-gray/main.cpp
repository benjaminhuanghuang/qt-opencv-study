#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    Mat img = imread("../thread.png", IMREAD_GRAYSCALE);
    Mat outImg(img.rows, img.cols, CV_8UC1);
    cout << img.rows;
    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            outImg.at<uchar>(i, j) = 255 - img.at<uchar>(i, j);
        }
    }
    imshow("input image", img);
    imshow("output image", outImg);
    waitKey(0);
    return 0;
}