//
// Created by kakarotto on 1/8/17.
//

#ifndef SHAKYAMUNI_SIMPLEGREYPREPROCESS_H
#define SHAKYAMUNI_SIMPLEGREYPREPROCESS_H

#include "PreProcess.h"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv/cv.hpp>

namespace skmn {
    class SimpleGreyPreProcess : public PreProcess {
    private:
        unsigned char grayLevel;
    public:
        SimpleGreyPreProcess(unsigned char grayLevel) {
            this->grayLevel = grayLevel;
        }

        Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize) {
            Image tmpBinary;
            cv::cvtColor(srcImage, tmpBinary, cv::COLOR_RGB2GRAY);
            cv::resize(tmpBinary, dstImage, outputSize);
            dstImage &= 0xe0;
            while (true) {
                cv::imshow("binary", dstImage);
                if (cv::waitKey(20) == 27) {
                    break;
                }
            }
        }
    };
}

#endif //SHAKYAMUNI_SIMPLEGREYPREPROCESS_H
