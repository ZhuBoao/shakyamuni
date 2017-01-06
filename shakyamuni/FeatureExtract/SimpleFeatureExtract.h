//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_SIMPLEFEATUREEXTRACT_H
#define SHAKYAMUNI_SIMPLEFEATUREEXTRACT_H


#include "FeatureExtract.h"

namespace skmn {
    class SimpleFeatureExtract : FeatureExtract {
    public:
        Image extract(Image &image);
    };
}

#endif //SHAKYAMUNI_SIMPLEFEATUREEXTRACT_H
