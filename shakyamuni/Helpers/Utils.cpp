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

    Video Utils::loadVideo(const char *filename, Video &video) {
        video = cv::VideoCapture(filename);
        if(!video.isOpened())  // check if we succeeded
            throw Exception(std::strcat(const_cast<char *>(filename), " cannot be found or read"));
        return video;
    }

    Video Utils::loadVideo(const std::string &filename, Video &video) {
        video = cv::VideoCapture(filename);
        if(!video.isOpened())  // check if we succeeded
            throw Exception(filename + " cannot be found or read");
        return video;
    }
}