#include <shakyamuni/Controller.h>
#include <shakyamuni/shakyamuni.h>
#include <shakyamuni/PreProcess/SimpleOutlinePreProcess.h>
#include <shakyamuni/CharacterRepresent/SingleCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/ComplexCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/GrayLevelCharacterRepresent.h>
#include <shakyamuni/PreProcess/FaceDetectBasePreProcess.h>
#include <shakyamuni/PreProcess/SimpleGreyPreProcess.h>
#include <shakyamuni/FrameProcessFactory.h>
#include <shakyamuni/Helpers/Utils.h>

int main() {

//    skmn::Controller ctrl = skmn::Controller();
//    skmn::SimpleGreyPreProcess preProcess = skmn::SimpleGreyPreProcess(GRAY_LEVEL_8);
//    skmn::GrayLevelCharacterRepresent characterRepresent = skmn::GrayLevelCharacterRepresent(GRAY_LEVEL_8);
//    ctrl.setPreProcessPtr((skmn::PreProcess *) &preProcess);
//    ctrl.setCharacterRepresent((skmn::CharacterRepresent *) &characterRepresent);
//    ctrl.runImage("../shakyamuni/test.jpg", 120);
//
//    skmn::shakyamuni skmn = skmn::shakyamuni();
//    skmn.playImage("../shakyamuni/test.jpg");

    skmn::shakyamuni ctrl = skmn::shakyamuni();
    ctrl.playVideo("../shakyamuni/testVideo.avi");

    return 0;
}