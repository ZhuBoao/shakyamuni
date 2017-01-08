//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_CHARACTERREPRESENT_H
#define SHAKYAMUNI_CHARACTERREPRESENT_H

#include <shakyamuni/Types/types.h>
#include <iostream>
#include <vector>
#include <map>

namespace skmn {
    class CharacterRepresent {
    protected:
        Features intensities;
    public:
        void setIntensities(const Features &intensities);
        const Features &getIntensities() const;
        virtual std::vector<std::string> represent() = 0;

    };
}

#endif //SHAKYAMUNI_CHARACTERREPRESENT_H
