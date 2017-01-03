//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_SIMPLECHARACTERREPRESENT_H
#define SHAKYAMUNI_SIMPLECHARACTERREPRESENT_H


#include "CharacterRepresent.h"

namespace skmn {
    class SimpleCharacterRepresent : CharacterRepresent {
    public:
        std::vector<std::string> represent();
    };
}

#endif //SHAKYAMUNI_SIMPLECHARACTERREPRESENT_H
