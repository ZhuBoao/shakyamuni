//
// Created by leonardo on 1/6/17.
//

#ifndef SHAKYAMUNI_COMPLEXCHARACTERREPRESENT_H
#define SHAKYAMUNI_COMPLEXCHARACTERREPRESENT_H

#define MAX_COMPRESS_LEVEL 3

#define COMPRESS_9 3
#define COMPRESS_4 2

#include "CharacterRepresent.h"
namespace skmn{
    class ComplexCharacterRepresent :public CharacterRepresent{
    public:
        ComplexCharacterRepresent();
        ComplexCharacterRepresent(int);
        std::vector<std::string> represent() override;
    private:
        int compressedLevel;
        std::vector<bool> getSearchKey(unsigned char*);
        std::map<std::vector<bool>,std::string> charSet;
    };
}

#endif //SHAKYAMUNI_COMPLEXCHARACTERREPRESENT_H
