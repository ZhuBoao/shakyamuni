//
// Created by kakarotto on 1/3/17.
//


#include "SimpleBinaryPreProcess.h"

namespace skmn {

    Image &SimpleBinaryPreProcess::process(Image &srcImage, Image &dstImage, ImgSize &outputSize) {
        Image tmpImage = Image(srcImage.size(), CV_8U);
        cv::cvtColor(srcImage, tmpImage, CV_RGB2GRAY);
        cv::GaussianBlur(tmpImage, tmpImage, cv::Size(79, 79), 4);
        cv::adaptiveThreshold(tmpImage, tmpImage, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY_INV, 39, 7);
        cv::erode(tmpImage, tmpImage, Image(4, 4, CV_8U));
        cv::dilate(tmpImage, tmpImage, Image(4, 4, CV_8U));
        dstImage = Image(outputSize, CV_8U);
        cv::resize(tmpImage, dstImage, dstImage.size(), 0, 0, cv::INTER_CUBIC);
        cv::threshold(dstImage, dstImage, 128, 255, cv::THRESH_BINARY);
//        while (true) {
//            cv::imshow("input", srcImage);
//            cv::imshow("dstImage", dstImage);
//            if (cv::waitKey(20) == 27) {
//                break;
//            }
//        }
    }
}