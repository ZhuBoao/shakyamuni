#include <shakyamuni/Controller.h>
#include <shakyamuni/PreProcess/SimpleBinaryPreProcess.h>
#include <shakyamuni/FeatureExtract/SimpleFeatureExtract.h>
#include <shakyamuni/CharacterRepresent/SingleCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/ComplexCharacterRepresent.h>

int main() {

    skmn::Controller ctrl = skmn::Controller();
    skmn::SimpleBinaryPreProcess preProcess = skmn::SimpleBinaryPreProcess();
    skmn::SimpleFeatureExtract featureExtract = skmn::SimpleFeatureExtract();
    skmn::ComplexCharacterRepresent characterRepresent = skmn::ComplexCharacterRepresent(COMPRESS_4);
    ctrl.setPreProcessPtr((skmn::PreProcess *) &preProcess);
    ctrl.setFeatureExtract((skmn::FeatureExtract *) &featureExtract);
    ctrl.setCharacterRepresent((skmn::CharacterRepresent *) &characterRepresent);
    ctrl.test();

    return 0;
}