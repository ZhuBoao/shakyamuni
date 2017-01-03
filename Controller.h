//
// Created by kakarotto on 1/3/17.
//

#include "PreProcess/PreProcess.h"
#include "FeatureExtract/FeatureExtract.h"
#include "CharacterRepresent/CharacterRepresent.h"

#ifndef SHAKYAMUNI_CONTROLLER_H
#define SHAKYAMUNI_CONTROLLER_H

class Controller{
private:
    Image input;
    ImgSize outputSize;
    PreProcess *preProcessPtr;
    FeatureExtract *featureExtract;
    CharacterRepresent *characterRepresent;

public:
    void test();
    void setPreProcessPtr(PreProcess *preProcessPtr);
    void setFeatureExtract(FeatureExtract *featureExtract);
    void setCharacterRepresent(CharacterRepresent *characterRepresent);
};

#endif //SHAKYAMUNI_CONTROLLER_H
