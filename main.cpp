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


    skmn::FrameProcess test = skmn::FrameProcessFactory::create(GREY_PROCESS_MODE_8, GRAY_LEVEL_MODE_8);
    skmn::Image img;
    skmn::Utils::loadimage("../shakyamuni/test.jpg", img);
    test.setImage(img);
    test.setOutputWidth(120);
    for (auto line:test.process()) {
        std::cout << line << std::endl;
    }

    return 0;
}