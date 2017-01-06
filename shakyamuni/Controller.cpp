//
// Created by kakarotto on 1/3/17.
//

#include "Controller.h"
#include <iostream>

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
        preProcessPtr->process();
        featureExtract->extract();
        auto out = characterRepresent->represent();
        for(auto row:out)
        {
            std::cout<<row<<std::endl;
        }
    }
}