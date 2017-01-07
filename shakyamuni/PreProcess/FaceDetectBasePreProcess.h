//
// Created by kakarotto on 1/6/17.
//

#ifndef SHAKYAMUNI_FACEDETECTBASEPREPROCESS_H
#define SHAKYAMUNI_FACEDETECTBASEPREPROCESS_H

#include "PreProcess.h"
#include <opencv2/objdetect/objdetect.hpp>

namespace skmn {
    class FaceDetectBasePreProcess:public PreProcess {
    public:
        Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize){
            cv::CascadeClassifier faceDetector;
            faceDetector.load("../shakyamuni/resource/lbpcascade_frontalface.xml");
        }
    };
}

#endif //SHAKYAMUNI_FACEDETECTBASEPREPROCESS_H
