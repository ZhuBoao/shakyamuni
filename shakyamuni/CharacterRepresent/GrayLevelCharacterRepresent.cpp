//
// Created by leonardo on 1/7/17.
//

#include "GrayLevelCharacterRepresent.h"

skmn::GrayLevelCharacterRepresent::GrayLevelCharacterRepresent() {
    this->grayLevel = GRAY_LEVEL_4;
    charSet_4[0] = "  ";
    charSet_4[1] = "''";
    charSet_4[2] = "++";
    charSet_4[3] = "@@";

    charSet_8[0] = "  ";
    charSet_8[1] = "..";
    charSet_8[2] = "--";
    charSet_8[3] = "::";
    charSet_8[4] = "++";
    charSet_8[5] = "**";
    charSet_8[6] = "ww";
    charSet_8[7] = "@@";
}

skmn::GrayLevelCharacterRepresent::GrayLevelCharacterRepresent(int level):GrayLevelCharacterRepresent() {
    this->grayLevel = level;
}

std::vector<std::string> skmn::GrayLevelCharacterRepresent::represent() {
    std::vector<std::string> outStr;
    std::map<Pixel,std::string> *charSet;
    switch(this->grayLevel)
    {
        case GRAY_LEVEL_4:
            charSet = &(this->charSet_4);
            break;
        case GRAY_LEVEL_8:
            charSet = &(this->charSet_8);
            break;
        default:
            charSet = &(this->charSet_4);
            break;
    }
    auto size = intensities.size();
    for(int row_i = 0; row_i != size.height ; ++row_i )
    {
        const Pixel* row = intensities.ptr<Pixel>(row_i);
        std::string rowStr;
        for(int col_i = 0; col_i != size.width ; ++col_i)
        {
            rowStr += (*charSet)[getSearchKey(row[col_i])];
        }
        outStr.push_back(rowStr);
    }
    return outStr;
}

skmn::Pixel skmn::GrayLevelCharacterRepresent::getSearchKey(skmn::Pixel pixel) {
    int bitLeft = 6;
    switch(grayLevel)
    {
        case GRAY_LEVEL_4:
            bitLeft = 6;
            break;
        case GRAY_LEVEL_8:
            bitLeft = 5;
            break;
        default:
            bitLeft = 6;
            break;
    }
    return pixel >> bitLeft;
}

