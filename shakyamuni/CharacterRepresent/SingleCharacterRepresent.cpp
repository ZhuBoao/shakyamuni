//
// Created by kakarotto on 1/3/17.
//

#include <iostream>
#include "SingleCharacterRepresent.h"

namespace skmn {
    std::vector<std::string> SingleCharacterRepresent::represent() {
        auto size = intensities.size();
        std::vector<std::string> outStr;
        for(int row_i = 0; row_i != size.height ; ++row_i )
        {
            const char* row = intensities.ptr<char>(row_i);
            std::string rowStr;
            for(int col_i = 0; col_i != size.width ; ++col_i)
            {
                rowStr += row[col_i]?'#':' ';
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