//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_FEATUREEXTRACT_H
#define SHAKYAMUNI_FEATUREEXTRACT_H


#include <shakyamuni/Types/types.h>

namespace skmn {
    class FeatureExtract {
    public:
        virtual Image extract(Image &image) = 0;
    };
}

#endif //SHAKYAMUNI_FEATUREEXTRACT_H
