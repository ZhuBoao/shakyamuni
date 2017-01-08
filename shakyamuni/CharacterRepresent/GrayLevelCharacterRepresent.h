//
// Created by leonardo on 1/7/17.
//

#ifndef SHAKYAMUNI_GRAYLEVELCHARACTERREPRESENT_H
#define SHAKYAMUNI_GRAYLEVELCHARACTERREPRESENT_H

#include "CharacterRepresent.h"
#include <shakyamuni/Types/types.h>

namespace skmn{
    class GrayLevelCharacterRepresent :public CharacterRepresent{
    public:
        GrayLevelCharacterRepresent();
        GrayLevelCharacterRepresent(int);
        std::vector<std::string> represent();
    private:
        int grayLevel = GRAY_LEVEL_4;
        Pixel getSearchKey(Pixel);
        std::map<Pixel,std::string> charSet_4;
        std::map<Pixel,std::string> charSet_8;
    };
}

#endif //SHAKYAMUNI_GRAYLEVELCHARACTERREPRESENT_H
