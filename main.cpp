#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
//#include <opencv2/videoio.hpp>
#include <opencv/cv.h>

int main() {

    cv::Mat mat = cv::Mat();

    mat = cv::imread("../profile2.png");
    while (true) {
        cv::imshow("Dalao", mat);
        if (cv::waitKey(10) == 27) {
            break;
        }
    }

    std::cout << "Hello Boao" << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}