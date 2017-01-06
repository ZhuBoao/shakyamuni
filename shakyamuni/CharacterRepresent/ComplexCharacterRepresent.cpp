//
// Created by leonardo on 1/6/17.
//

#include <shakyamuni/Helpers/Exception.h>
#include "ComplexCharacterRepresent.h"
skmn::ComplexCharacterRepresent::ComplexCharacterRepresent() {
    compressedLevel =  COMPRESS_4;
    charSet[{0,0,0,0}] = "  ";
    charSet[{1,1,1,1}] = "&&";

    charSet[{0,0,0,1}] = " m";
    charSet[{0,0,1,0}] = "m ";
    charSet[{0,1,0,0}] = " ^";
    charSet[{1,0,0,0}] = "^ ";

    charSet[{0,0,1,1}] = "nn";
    charSet[{0,1,0,1}] = " l";
    charSet[{0,1,1,0}] = " /";
    charSet[{1,0,0,1}] = "\\ ";
    charSet[{1,0,1,0}] = "l ";
    charSet[{1,1,0,0}] = "^^";

    charSet[{0,1,1,1}] = "o&";
    charSet[{1,0,1,1}] = "&o";
    charSet[{1,1,0,1}] = "^&";
    charSet[{1,1,1,0}] = "&^";
}
skmn::ComplexCharacterRepresent::ComplexCharacterRepresent(int level):ComplexCharacterRepresent()
{
    if(level==0 || level >MAX_COMPRESS_LEVEL)
    {
        throw Exception("Undefined Compression Level");
    }
    compressedLevel = level;
}

std::vector<bool> skmn::ComplexCharacterRepresent::getSearchKey(unsigned char* pixels)
{
    std::vector<bool> rtn;
    size_t height = intensities.step;
    for(size_t i =0; i<compressedLevel; ++i)
    {
        for(size_t j=0; j<compressedLevel; ++j)
        {
            rtn.push_back(pixels[i*height+j]);
        }
    }
    return rtn;
}

std::vector<std::string> skmn::ComplexCharacterRepresent::represent() {
    using pixel = unsigned char;
    std::vector<std::string> outStr;
    for(int row_i = 0,height = intensities.rows, width=intensities.cols; row_i < height - compressedLevel ; row_i+=compressedLevel)
    {
        std::string rowStr;
        for(int col_i = 0; col_i < width - compressedLevel ; col_i+=compressedLevel)
        {
            rowStr += charSet[getSearchKey(intensities.ptr<pixel>(row_i,col_i))];
        }
        outStr.push_back(rowStr);
    }
    return outStr;
}

