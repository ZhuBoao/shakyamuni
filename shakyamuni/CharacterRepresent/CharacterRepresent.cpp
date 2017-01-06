//
// Created by kakarotto on 1/3/17.
//

#include "CharacterRepresent.h"

const skmn::Features &skmn::CharacterRepresent::getIntensities() const {
    return intensities;
}

void skmn::CharacterRepresent::setIntensities(const skmn::Features &intensities) {
    CharacterRepresent::intensities = intensities;
}
