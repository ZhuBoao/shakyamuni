#include <shakyamuni/Controller.h>
#include <shakyamuni/PreProcess/SimpleOutlinePreProcess.h>
#include <shakyamuni/FeatureExtract/SimpleFeatureExtract.h>
#include <shakyamuni/CharacterRepresent/SingleCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/ComplexCharacterRepresent.h>
#include <shakyamuni/PreProcess/FaceDetectBasePreProcess.h>
#include <shakyamuni/PreProcess/SimpleGreyPreProcess.h>

int main() {

    skmn::Controller ctrl = skmn::Controller();
    skmn::SimpleGreyPreProcess preProcess = skmn::SimpleGreyPreProcess();
    skmn::SimpleFeatureExtract featureExtract = skmn::SimpleFeatureExtract();
    skmn::ComplexCharacterRepresent characterRepresent = skmn::ComplexCharacterRepresent(COMPRESS_4);
    ctrl.setPreProcessPtr((skmn::PreProcess *) &preProcess);
    ctrl.setFeatureExtract((skmn::FeatureExtract *) &featureExtract);
    ctrl.setCharacterRepresent((skmn::CharacterRepresent *) &characterRepresent);
    ctrl.runImage("../shakyamuni/test.jpg", 120);

    return 0;
}