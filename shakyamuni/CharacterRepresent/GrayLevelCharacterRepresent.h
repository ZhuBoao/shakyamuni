//
// Created by leonardo on 1/7/17.
//

#ifndef SHAKYAMUNI_GRAYLEVELCHARACTERREPRESENT_H
#define SHAKYAMUNI_GRAYLEVELCHARACTERREPRESENT_H

#include "CharacterRepresent.h"

namespace skmn{
    class GrayLevelCharacterRepresent :public CharacterRepresent{
    public:
        GrayLevelCharacterRepresent();

    private:
        int grayLevel = 4;
    };
}

#endif //SHAKYAMUNI_GRAYLEVELCHARACTERREPRESENT_H
