//
// Created by kakarotto on 1/10/17.
//

#ifndef SHAKYAMUNI_CHARACTERREPRESENTWITHTIMESTAMP_H
#define SHAKYAMUNI_CHARACTERREPRESENTWITHTIMESTAMP_H

#include <iostream>
#include <vector>

namespace skmn {
    class CharacterRepresentWithTimeStamp {
    private:
        std::vector<std::string> frame;
    public:
        CharacterRepresentWithTimeStamp(std::vector<std::string> &frame);

        std::vector<std::string> &getFrame();
    };
}

#endif //SHAKYAMUNI_CHARACTERREPRESENTWITHTIMESTAMP_H
