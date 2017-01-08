//
// Created by kakarotto on 1/8/17.
//

#include "Utils.h"

namespace skmn{

    Image Utils::loadimage(const std::string &filename, Image &image) {
        image = cv::imread(filename);
        if (!image.data) {
            throw Exception(filename + " cannot be found or read");
        }
        return image;
    }

    Image Utils::loadimage(const char *filename, Image &image) {
        image = cv::imread(filename);
        if (!image.data) {
            throw Exception(std::strcat(const_cast<char *>(filename), " cannot be found or read"));
        }
        return image;
    }
}