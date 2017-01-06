//
// Created by kakarotto on 1/3/17.
//

#include "Controller.h"
#include <cmath>

namespace skmn {
    void Controller::setPreProcessPtr(PreProcess *preProcessPtr) {
        Controller::preProcessPtr = preProcessPtr;
        preProcessPtr->loadimage("../shakyamuni/test.jpg", this->input);
        this->outputSize = cv::Size(320, (int) std::fabs(
                (double) (this->input.size().height) / this->input.size().width * 320));
    }

    void Controller::setFeatureExtract(FeatureExtract *featureExtract) {
        Controller::featureExtract = featureExtract;
    }

    void Controller::setCharacterRepresent(CharacterRepresent *characterRepresent) {
        Controller::characterRepresent = characterRepresent;
    }

    void Controller::test() {
        preProcessPtr->process(this->input, this->processed, this->outputSize);
        featureExtract->extract();
        characterRepresent->represent();
    }
}