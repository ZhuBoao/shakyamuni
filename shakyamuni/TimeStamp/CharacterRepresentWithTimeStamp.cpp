//
// Created by kakarotto on 1/10/17.
//

#include "CharacterRepresentWithTimeStamp.h"

namespace skmn{

    CharacterRepresentWithTimeStamp::CharacterRepresentWithTimeStamp(std::vector<std::string> &frame) {
        this->frame = std::vector<std::string>(frame);
    }

    std::vector<std::string> &CharacterRepresentWithTimeStamp::getFrame() {
        return this->frame;
    }
}