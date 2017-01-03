//
// Created by kakarotto on 1/3/17.
//



#ifndef SHAKYAMUNI_CONTROLLER_H
#define SHAKYAMUNI_CONTROLLER_H

#include <shakyamuni/PreProcess/PreProcess.h>
#include <shakyamuni/FeatureExtract/FeatureExtract.h>
#include <shakyamuni/CharacterRepresent/CharacterRepresent.h>

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
