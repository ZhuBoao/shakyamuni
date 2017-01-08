//
// Created by kakarotto on 1/3/17.
//

#include <iostream>
#include <string>
#include "SingleCharacterRepresent.h"
#include <shakyamuni/Types/types.h>

namespace skmn {
    std::vector<std::string> SingleCharacterRepresent::represent() {
        auto size = intensities.size();
        std::vector<std::string> outStr;
        std::string pixelStr;
        pixelStr.push_back(this->character);
        pixelStr.push_back(this->character);
        for(int row_i = 0; row_i != size.height ; ++row_i )
        {
            const Pixel* row = intensities.ptr<Pixel>(row_i);
            std::string rowStr;
            for(int col_i = 0; col_i != size.width ; ++col_i)
            {
                rowStr += row[col_i]?pixelStr:"  ";
            }
            outStr.push_back(rowStr);
        }
        return outStr;
    }

    SingleCharacterRepresent::SingleCharacterRepresent(){}

    SingleCharacterRepresent::SingleCharacterRepresent(const Features &f) {
        this->intensities = f;
    }

    SingleCharacterRepresent::SingleCharacterRepresent(const Features &f,char character) : character(character){
        this->intensities = f;
    }

    char SingleCharacterRepresent::getCharacter() const {
        return character;
    }

    void SingleCharacterRepresent::setCharacter(char character) {
        SingleCharacterRepresent::character = character;
    }
}