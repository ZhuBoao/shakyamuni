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
#include <math.h>
#include <shakyamuni/Helpers/Exception.h>

namespace skmn {
    class FaceDetectBasePreProcess : public PreProcess {
    private:
        const std::string cascadeFile = "../shakyamuni/resource/haarcascade_frontalface_alt2.xml";
        cv::CascadeClassifier faceDetector;

        bool facedetected(Image &image) {
            Image tmpBinary;
            cv::cvtColor(image, tmpBinary, cv::COLOR_RGB2GRAY);
            std::vector<cv::Rect> face;
            cv::equalizeHist(tmpBinary, tmpBinary);
            faceDetector.detectMultiScale(tmpBinary, face, 1.2, 3, cv::CASCADE_SCALE_IMAGE);

            return face.size() > 0;
        }

        int entropyCalculate(Image &image, double &average) {
            Image tmpBinary, hist;
            cv::cvtColor(image, tmpBinary, cv::COLOR_RGB2GRAY);
            int histSize = 256;
            float range[] = {0, 256};
            const float *histRange = {range};
            cv::calcHist(&tmpBinary, 1, 0, Image(), hist, 1, &histSize, &histRange);

            for (int i = 0; i < 256; ++i) {
                average += i * hist.at<float>(i, 0);
            }
            average /= tmpBinary.size().width * tmpBinary.size().height;

            hist /= tmpBinary.total();

            Image logP;
            hist.setTo(1, hist == 0);
            cv::log(hist, logP);
            double entropy = -1 * sum(hist.mul(logP)).val[0];

            return static_cast<int>(std::ceil(entropy));
        }

    public:
        FaceDetectBasePreProcess() {
            if (!this->faceDetector.load(cascadeFile))
                throw Exception("Can not load file " + cascadeFile);
        }

        Image &process(Image &srcImage, Image &dstImage, ImgSize &outputSize) {

            double average = 0;
            int entropy = this->entropyCalculate(srcImage, average);

            if (entropy <= 4) {
                Image tmpBinary;
                cv::cvtColor(srcImage, tmpBinary, cv::COLOR_RGB2GRAY);
                cv::threshold(tmpBinary, dstImage, average, 255, cv::THRESH_BINARY_INV);
                cv::resize(dstImage, dstImage, outputSize);
//                while (true) {
//                    cv::imshow("equalizehist", dstImage);
//                    if (cv::waitKey(20) == 27) {
//                        break;
//                    }
//                }
            } else {
                std::cout << "face detected" << std::endl;
            }
            return dstImage;
        }
    };
}

#endif //SHAKYAMUNI_FACEDETECTBASEPREPROCESS_H
