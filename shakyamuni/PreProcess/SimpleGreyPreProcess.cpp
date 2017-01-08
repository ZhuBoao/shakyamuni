//
// Created by kakarotto on 1/8/17.
//

#include "SimpleGreyPreProcess.h"
namespace skmn {

    SimpleGreyPreProcess::SimpleGreyPreProcess(int grayLevel) {
        switch (grayLevel) {
            case GRAY_LEVEL_4:
                this->mask = 0xD0;
                break;
            case GRAY_LEVEL_8:
                this->mask = 0xE0;
                break;
            default:
                this->mask = 0xD0;
                break;
        }
    }

    Image &SimpleGreyPreProcess::process(Image &srcImage, Image &dstImage, ImgSize &outputSize) {
        Image tmpBinary;
        cv::cvtColor(srcImage, tmpBinary, cv::COLOR_RGB2GRAY);
        cv::resize(tmpBinary, dstImage, outputSize);
        dstImage &= mask;
//            while (true) {
//                cv::imshow("binary", dstImage);
//                if (cv::waitKey(20) == 27) {
//                    break;
//                }
//            }
        return dstImage;
    }
}