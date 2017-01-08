//
// Created by kakarotto on 1/8/17.
//

#ifndef SHAKYAMUNI_FRAMEPROCESSFACTORY_H
#define SHAKYAMUNI_FRAMEPROCESSFACTORY_H

#include <shakyamuni/FrameProcess.h>
#include <shakyamuni/PreProcess/SimpleGreyPreProcess.h>
#include <shakyamuni/PreProcess/SimpleOutlinePreProcess.h>
#include <shakyamuni/PreProcess/FaceDetectBasePreProcess.h>
#include <shakyamuni/CharacterRepresent/SingleCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/GrayLevelCharacterRepresent.h>
#include <shakyamuni/CharacterRepresent/ComplexCharacterRepresent.h>

namespace skmn {
    class FrameProcessFactory {
        static FrameProcess create(PreProcessMode ppMode, CharacterMode cMode);
    };
}


#endif //SHAKYAMUNI_FRAMEPROCESSFACTORY_H
