//
// Created by kakarotto on 1/10/17.
//

#ifndef SHAKYAMUNI_FRAMEWITHTIMESTAMP_H
#define SHAKYAMUNI_FRAMEWITHTIMESTAMP_H

#include "TimeStamp.h"

namespace skmn {
    class FrameWithTimeStamp : public TimeStamp {
    private:
        Image image;
    public:
        FrameWithTimeStamp(Image &image, Time &timestamp);

        Image &getImage();
    };
}

#endif //SHAKYAMUNI_FRAMEWITHTIMESTAMP_H
