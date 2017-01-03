//
// Created by kakarotto on 1/3/17.
//


#ifndef SHAKYAMUNI_PREPROCESS_H
#define SHAKYAMUNI_PREPROCESS_H

#include <shakyamuni/Types/types.h>
#include <opencv2/imgcodecs.hpp>

class PreProcess{
public:
//    Image loadimage(std::string &filename){
//        cv::Mat image = cv::imread(filename);
//        if(image.data);
//        return image;
//    }
    virtual Image process() = 0;
};

#endif //SHAKYAMUNI_PREPROCESS_H
