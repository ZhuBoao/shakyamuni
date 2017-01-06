//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_SIMPLECHARACTERREPRESENT_H
#define SHAKYAMUNI_SIMPLECHARACTERREPRESENT_H


#include "CharacterRepresent.h"
#include <map>

namespace skmn {
    class SingleCharacterRepresent : public CharacterRepresent {
    public:
        SingleCharacterRepresent();
        SingleCharacterRepresent(const Features&);
        SingleCharacterRepresent(const Features&,char character);
        std::vector<std::string> represent();
        char getCharacter() const;
        void setCharacter(char character);
    private:
        char character = '#';
    };
}

#endif //SHAKYAMUNI_SIMPLECHARACTERREPRESENT_H
