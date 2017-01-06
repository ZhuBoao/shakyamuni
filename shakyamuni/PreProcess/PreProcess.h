//
// Created by kakarotto on 1/3/17.
//


#ifndef SHAKYAMUNI_PREPROCESS_H
#define SHAKYAMUNI_PREPROCESS_H

#include <shakyamuni/Types/types.h>
#include <opencv2/imgcodecs.hpp>
#include <shakyamuni/Helpers/Exception.h>

namespace skmn {
    class PreProcess {
    public:
        Image &loadimage(const std::string &filename, Image &image);

        Image &loadimage(const char *filename, Image &image);

        Video &loadVideo(const std::string &filename, Video &video);

        Video &loadVideo(const char *filename, Video &video);

        virtual Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize) = 0;
    };
}

#endif //SHAKYAMUNI_PREPROCESS_H
