//
// Created by kakarotto on 1/3/17.
//

#include <shakyamuni/Types/types.h>
#include <opencv2/videoio.hpp>
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

    Video &PreProcess::loadVideo(const std::string &filename, Video &video) {
        Video capture(filename);
        video = capture;
        if( !capture.isOpened() )
            throw Exception(filename + " cannot be found or read");
        return video;
    }

    Video &PreProcess::loadVideo(const char *filename, Video &video) {
        Video capture(filename);
        video = capture;
        if( !capture.isOpened() )
            throw Exception(std::strcat(const_cast<char *>(filename), " cannot be found or read"));
        return video;
    }
}