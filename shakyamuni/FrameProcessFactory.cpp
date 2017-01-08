//
// Created by kakarotto on 1/8/17.
//

#include "FrameProcessFactory.h"

namespace skmn{

    FrameProcess FrameProcessFactory::create(PreProcessMode ppMode, CharacterMode cMode) {

        PreProcess preProcess;
        CharacterRepresent characterRepresent;

        switch (ppMode) {
            case GREY_PROCESS_MODE_4:
                preProcess = SimpleGreyPreProcess(GRAY_LEVEL_4);
                break;
            case GREY_PROCESS_MODE_8:
                preProcess = SimpleGreyPreProcess(GRAY_LEVEL_8);
                break;
            case OUTLINE_PROCESS_MODE:
                preProcess = SimpleOutlinePreProcess();
                break;
            case FACE_DETECTED_MODE:
                preProcess = FaceDetectBasePreProcess();
                break;
            default:
                preProcess = SimpleGreyPreProcess(GRAY_LEVEL_8);
                break;
        }

        switch (cMode) {
            case GRAY_LEVEL_MODE_2:
                characterRepresent = SingleCharacterRepresent();
                break;
            case GRAY_LEVEL_MODE_4:
                characterRepresent = GrayLevelCharacterRepresent(GRAY_LEVEL_4);
                break;
            case GRAY_LEVEL_MODE_8:
                characterRepresent = GrayLevelCharacterRepresent(GRAY_LEVEL_8);
                break;
            case COMPLEX_MODE:
                characterRepresent = ComplexCharacterRepresent(COMPRESS_4);
                break;
            default:
                characterRepresent = GrayLevelCharacterRepresent(GRAY_LEVEL_8);
                break;
        }

        return FrameProcess(preProcess, characterRepresent);
    }
}