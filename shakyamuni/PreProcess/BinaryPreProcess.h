//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_BINARYPREPROCESS_H
#define SHAKYAMUNI_BINARYPREPROCESS_H

#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv/cv.hpp>
#include "PreProcess.h"

namespace skmn {
    class BinaryPreProcess : public PreProcess {
    public:
        Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize) {
            Image tmpImage = Image(srcImage.size(), CV_8U);
            cv::cvtColor(srcImage, tmpImage, CV_RGB2GRAY);
            cv::medianBlur(tmpImage, tmpImage, 15);
            cv::adaptiveThreshold(tmpImage, tmpImage, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY_INV, 39, 7);
            cv::erode(tmpImage,tmpImage,Image(4,4,CV_8U));
            cv::dilate(tmpImage,tmpImage,Image(4,4,CV_8U));
            dstImage = Image(outputSize, CV_8U);
            cv::resize(tmpImage, dstImage, dstImage.size(), 0, 0, cv::INTER_CUBIC);
//            while (true) {
//                cv::imshow("input", srcImage);
//                cv::imshow("dstImage", dstImage);
//                if (cv::waitKey(20) == 27) {
//                    break;
//                }
//            }
        }
    };
}

#endif //SHAKYAMUNI_BINARYPREPROCESS_H
