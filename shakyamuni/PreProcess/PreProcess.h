//
// Created by kakarotto on 1/3/17.
//


#ifndef SHAKYAMUNI_PREPROCESS_H
#define SHAKYAMUNI_PREPROCESS_H

#include <shakyamuni/Types/types.h>

namespace skmn {
    class PreProcess {
    public:
        virtual Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize) = 0;
    };
}

#endif //SHAKYAMUNI_PREPROCESS_H
