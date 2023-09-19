#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[])
{
    Mat src = imread("/home/westwell/wwws/learn_opencv/config/bus.jpg", IMREAD_GRAYSCALE);
    namedWindow("input", WINDOW_FREERATIO);
    imshow("input", src);
    waitKey(0);
    destroyAllWindows();
    return 0;
}


