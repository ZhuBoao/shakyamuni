//
// Created by kakarotto on 1/3/17.
//

#include "Controller.h"
#include <iostream>
#include <opencv2/opencv.hpp>

namespace skmn {
    void Controller::setPreProcessPtr(PreProcess *preProcessPtr) {
        Controller::preProcessPtr = preProcessPtr;
    }

    void Controller::setFeatureExtract(FeatureExtract *featureExtract) {
        Controller::featureExtract = featureExtract;
    }

    void Controller::setCharacterRepresent(CharacterRepresent *characterRepresent) {
        Controller::characterRepresent = characterRepresent;
    }

    void Controller::test() {
        this->runImage("../shakyamuni/test.jpg");
    }

    void Controller::runImage(const char *fileName) {
        std::string fileStr(fileName);
        Controller::imageFIleName = fileStr;
        playImage();
    }

    void Controller::runImage(const std::string &fileName) {
        Controller::imageFIleName = fileName;
        playImage();
    }

    void Controller::runVideo(const char *fileName) {
        std::string fileStr(fileName);
        Controller::videoFileName = fileStr;
        playVideo();
    }

    void Controller::runVideo(const std::string &fileName) {
        Controller::imageFIleName = fileName;
        playVideo();
    }

    void Controller::setVideoFileName(const std::string &videoFileName) {
        Controller::videoFileName = videoFileName;
    }

    void Controller::setImageFIleName(const std::string &imageFIleName) {
        Controller::imageFIleName = imageFIleName;
    }

    void Controller::setVideoFileName(const char *videoFileName) {
        Controller::videoFileName = videoFileName;
    }

    void Controller::setImageFIleName(const char *imageFIleName) {
        Controller::imageFIleName = imageFIleName;
    }

    void Controller::playImage() {
        preProcessPtr->loadimage(this->imageFIleName, this->input);
        this->outputSize = cv::Size(240, (int) std::fabs(
                (double) (this->input.size().height) / this->input.size().width * 240));

        preProcessPtr->process(this->input, this->processed, this->outputSize);
        featureExtract->extract(this->processed);
        characterRepresent->setIntensities(this->processed);
        auto out = characterRepresent->represent();
        for (auto row:out) {
            std::cout << row << std::endl;
        }
    }

    void Controller::playVideo() {
        preProcessPtr->loadVideo(this->videoFileName, this->input_video);
        Image edges;
        cv::namedWindow("edges", 1);
        for (;;) {
            Image frame;
            this->input_video >> frame; // get a new frame from camera
            if (!frame.empty()) {
                cvtColor(frame, edges, cv::COLOR_BGR2GRAY);
                cv::resize(edges, edges, ImgSize(edges.size().width / 5 * 2, edges.size().height / 5 * 2));
                GaussianBlur(edges, edges, cv::Size(7, 7), 1.5, 1.5);
                Canny(edges, edges, 0, 30, 3);
                imshow("edges", edges);
            }
            if (cv::waitKey(30) == 27) break;
        }
    }
}