//
// Created by kakarotto on 1/3/17.
//

#include <shakyamuni/Types/types.h>
#include "PreProcess.h"

skmn::Image skmn::PreProcess::loadimage(std::string &filename) {
    cv::Mat image = cv::imread(filename);
    if(image.data) throw Exception(filename+" cannot be found or read");
    return image;
}
