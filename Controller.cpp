//
// Created by kakarotto on 1/3/17.
//

#include "Controller.h"

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
    characterRepresent->represent();
}
