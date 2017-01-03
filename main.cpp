#include <shakyamuni/Controller.h>
#include <shakyamuni/PreProcess/BinaryPreProcess.h>
#include <shakyamuni/FeatureExtract/SimpleFeatureExtract.h>
#include <shakyamuni/CharacterRepresent/SimpleCharacterRepresent.h>

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