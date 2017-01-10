//
// Created by kakarotto on 1/8/17.
//

#ifndef SHAKYAMUNI_UTILS_H
#define SHAKYAMUNI_UTILS_H

#include <shakyamuni/Types/types.h>
#include <opencv2/imgcodecs.hpp>
#include "Exception.h"

namespace skmn {
    class Utils {
    public:
        static Image loadimage(const std::string &filename, Image &image);

        static Image loadimage(const char *filename, Image &image);

        static Video loadVideo(const char *filename, Video &video);

        static Video loadVideo(const std::string &filename, Video &video);

    };
}

#endif //SHAKYAMUNI_UTILS_H
