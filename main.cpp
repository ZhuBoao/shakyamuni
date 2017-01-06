#include <shakyamuni/Controller.h>
#include <shakyamuni/PreProcess/BinaryPreProcess.h>
#include <shakyamuni/FeatureExtract/SimpleFeatureExtract.h>
#include <shakyamuni/CharacterRepresent/SingleCharacterRepresent.h>

#include <vector>

int main() {

    skmn::Controller ctrl = skmn::Controller();
    skmn::BinaryPreProcess preProcess = skmn::BinaryPreProcess();
    skmn::SimpleFeatureExtract featureExtract = skmn::SimpleFeatureExtract();
    skmn::SingleCharacterRepresent characterRepresent = skmn::SingleCharacterRepresent(testMat);
    ctrl.setPreProcessPtr((skmn::PreProcess *) &preProcess);
    ctrl.setFeatureExtract((skmn::FeatureExtract *) &featureExtract);
    ctrl.setCharacterRepresent((skmn::CharacterRepresent *) &characterRepresent);
    ctrl.test();

//    std::string test = "test.jpg";
//    try {
//        preProcess.loadimage(test);
//    } catch (skmn::Exception e) {
//        std::cerr << e.what() << std::endl;
//    }

    return 0;
}