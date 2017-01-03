#include "Controller.h"
#include "PreProcess/BinaryPreProcess.h"
#include "FeatureExtract/SimpleFeatureExtract.h"
#include "CharacterRepresent/SimpleCharacterRepresent.h"

int main() {

    Controller ctrl = Controller();
    BinaryPreProcess preProcess = BinaryPreProcess();
    SimpleFeatureExtract featureExtract = SimpleFeatureExtract();
    SimpleCharacterRepresent characterRepresent = SimpleCharacterRepresent();
    ctrl.setPreProcessPtr((PreProcess *) &preProcess);
    ctrl.setFeatureExtract((FeatureExtract *) &featureExtract);
    ctrl.setCharacterRepresent((CharacterRepresent *) &characterRepresent);
    ctrl.test();

    return 0;
}