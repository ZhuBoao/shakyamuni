//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_TYPES_H
#define SHAKYAMUNI_TYPES_H

#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>

#define GRAY_LEVEL_8 8
#define GRAY_LEVEL_4 4

#define GREY_PROCESS_MODE_4     0b00000001
#define GREY_PROCESS_MODE_8     0b00000010
#define OUTLINE_PROCESS_MODE    0b00000011
#define FACE_DETECTED_MODE      0b00000100

#define GRAY_LEVEL_MODE_2       0b00000001
#define GRAY_LEVEL_MODE_4       0b00000010
#define GRAY_LEVEL_MODE_8       0b00000011
#define COMPLEX_MODE            0b00000100

namespace skmn {
    typedef cv::Mat Image;
    typedef cv::Size ImgSize;
    typedef cv::Mat Features;
    typedef cv::VideoCapture Video;
    typedef unsigned char Pixel;
    typedef unsigned char CharacterMode;
    typedef unsigned char PreProcessMode;
    typedef unsigned char DefinedMode;
    typedef unsigned long Time;
}

#endif //SHAKYAMUNI_TYPES_H
