//
// Created by kakarotto on 1/3/17.
//

#include "CharacterRepresent.h"


const std::map<int, char> &skmn::CharacterRepresent::getCharacterSet() const {
    return characterSet;
}


void skmn::CharacterRepresent::setCharacterSet(const std::map<int, char> &characterSet) {
    CharacterRepresent::characterSet = characterSet;
}

const skmn::Features &skmn::CharacterRepresent::getIntensities() const {
    return intensities;
}

void skmn::CharacterRepresent::setIntensities(const skmn::Features &intensities) {
    CharacterRepresent::intensities = intensities;
}
