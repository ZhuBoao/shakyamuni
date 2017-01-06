//
// Created by kakarotto on 1/3/17.
//

#include <shakyamuni/Types/types.h>
#include "PreProcess.h"

namespace skmn {

    Image &PreProcess::loadimage(const std::string &filename, Image &image) {
        image = cv::imread(filename);
        if (!image.data) {
            throw Exception(filename + " cannot be found or read");
        }
        return image;
    }

    Image &PreProcess::loadimage(const char *filename, Image &image) {
        image = cv::imread(filename);
        if (!image.data) {
            throw Exception(std::strcat(const_cast<char *>(filename), " cannot be found or read"));
        }
        return image;
    }
}