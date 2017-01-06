#include <shakyamuni/Controller.h>
#include <shakyamuni/PreProcess/BinaryPreProcess.h>
#include <shakyamuni/FeatureExtract/SimpleFeatureExtract.h>
#include <shakyamuni/CharacterRepresent/SimpleCharacterRepresent.h>

int main() {

    skmn::Controller ctrl = skmn::Controller();
    skmn::BinaryPreProcess preProcess = skmn::BinaryPreProcess();
    skmn::SimpleFeatureExtract featureExtract = skmn::SimpleFeatureExtract();
    skmn::SimpleCharacterRepresent characterRepresent = skmn::SimpleCharacterRepresent();
    ctrl.setPreProcessPtr((skmn::PreProcess *) &preProcess);
    ctrl.setFeatureExtract((skmn::FeatureExtract *) &featureExtract);
    ctrl.setCharacterRepresent((skmn::CharacterRepresent *) &characterRepresent);
    ctrl.test();

//    try {
//        preProcess.loadimage("test.jpg");
//    } catch (skmn::Exception e) {
//        std::cerr << e.what() << std::endl;
//    }

    return 0;
}