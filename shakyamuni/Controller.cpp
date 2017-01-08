//
// Created by kakarotto on 1/3/17.
//

#include <shakyamuni/Helpers/Exception.h>
#include <shakyamuni/Helpers/Utils.h>
#include "Controller.h"

namespace skmn {
    void Controller::setPreProcessPtr(PreProcess *preProcessPtr) {
        Controller::preProcessPtr = preProcessPtr;
    }

    void Controller::setCharacterRepresent(CharacterRepresent *characterRepresent) {
        Controller::characterRepresent = characterRepresent;
    }

    void Controller::runImage(const char *fileName, const int &width) {
        std::string fileStr(fileName);
        Controller::imageFIleName = fileStr;
        playImage(width);
    }

    void Controller::runImage(const std::string &fileName, const int &width) {
        Controller::imageFIleName = fileName;
        playImage(width);
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

    void Controller::playImage(const int &width) {
        if (width < 40)
            throw Exception("The width is too small to process!");

        Utils::loadimage(this->imageFIleName, this->input);

        int height = (int) std::fabs((double) (this->input.size().height) / this->input.size().width * width);
        this->outputSize = cv::Size(width % 2 ? width + 1 : width, height % 2 ? height + 1 : height);

        preProcessPtr->process(this->input, this->processed, this->outputSize);
        characterRepresent->setIntensities(this->processed);
        auto out = characterRepresent->represent();
        for (auto row:out) {
            std::cout << row << std::endl;
        }
    }

    void Controller::playVideo() {

    }
}