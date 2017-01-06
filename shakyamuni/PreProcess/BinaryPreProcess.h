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
            cv::adaptiveThreshold(tmpImage, tmpImage, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY_INV, 3, 5);
            dstImage = Image(outputSize, CV_8U);
            cv::resize(tmpImage, dstImage, dstImage.size(), 0, 0, cv::INTER_CUBIC);
        }
    };
}

#endif //SHAKYAMUNI_BINARYPREPROCESS_H
