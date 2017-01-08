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
        Pixel mask;
    public:
        SimpleGreyPreProcess(int grayLevel);

        Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize);
    };
}

#endif //SHAKYAMUNI_SIMPLEGREYPREPROCESS_H
