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
    class SimpleBinaryPreProcess : public PreProcess {
    public:
        Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize);
    };
}

#endif //SHAKYAMUNI_BINARYPREPROCESS_H
