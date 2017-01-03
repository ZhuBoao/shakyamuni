#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
//#include <opencv2/videoio.hpp>
#include <opencv/cv.h>

int main() {

    cv::Mat mat = cv::Mat();

    cv::VideoCapture capture;
    capture.open(0);

    if(capture.isOpened()){
        capture >> mat;
        while(!mat.empty()) {
            cv::imshow("test", mat);
            if(cv::waitKey(3)==27){
                break;
            }
        }
    }

    std::cout << "Hello Boao" << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}