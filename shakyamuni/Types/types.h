//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_TYPES_H
#define SHAKYAMUNI_TYPES_H

#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>

#define GRAY_LEVEL_8 8
#define GRAY_LEVEL_4 4

#define GRAY_LEVEL_MODE_2       0
#define GRAY_LEVEL_MODE_4       1
#define GRAY_LEVEL_MODE_8       2
#define COMPLEX_MODE            4
namespace skmn {
    typedef cv::Mat Image;
    typedef cv::Size ImgSize;
    typedef cv::Mat Features;
    typedef cv::VideoCapture Video;
    typedef unsigned char Pixel;
    typedef unsigned char CharacterMode;
    typedef unsigned char PreProcessMode;
    typedef unsigned char DefinedMode;
}

#endif //SHAKYAMUNI_TYPES_H
