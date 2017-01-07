//
// Created by kakarotto on 1/6/17.
//

#ifndef SHAKYAMUNI_FACEDETECTBASEPREPROCESS_H
#define SHAKYAMUNI_FACEDETECTBASEPREPROCESS_H

#include "PreProcess.h"
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv/cv.hpp>
#include <iostream>

namespace skmn {
    class FaceDetectBasePreProcess : public PreProcess {
    private:
        const std::string cascadeFile = "../shakyamuni/resource/haarcascade_frontalface_alt2.xml";
    public:
        Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize) {
            cv::CascadeClassifier faceDetector;
            if (!faceDetector.load(cascadeFile))
                throw Exception("Can not load file " + cascadeFile);

            Image tmpBinary;
            cv::cvtColor(srcImage, tmpBinary, cv::COLOR_RGB2GRAY);
            std::vector<cv::Rect> face;
            cv::equalizeHist(tmpBinary, tmpBinary);
            faceDetector.detectMultiScale(tmpBinary, face, 1.2, 3, cv::CASCADE_SCALE_IMAGE);

            if (face.size()) {
                std::cout << face.size() << std::endl;
                for (auto &iter:face) {
                    cv::rectangle(tmpBinary, iter, cv::Scalar(255, 0, 0), 8);
                }
            } else {
                std::cout << "No face detected" << std::endl;
            }

//            while (true) {
//                cv::imshow("equalizehist", tmpBinary);
//                if (cv::waitKey(20) == 27) {
//                    break;
//                }
//            }
        }
    };
}

#endif //SHAKYAMUNI_FACEDETECTBASEPREPROCESS_H
