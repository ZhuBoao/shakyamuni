//
// Created by kakarotto on 1/10/17.
//

#include "FrameWithTimeStamp.h"

namespace skmn{

    FrameWithTimeStamp::FrameWithTimeStamp(Image &image, Time &timestamp) : TimeStamp(timestamp) {
        this->image = image.clone();
    }

    Image &FrameWithTimeStamp::getImage() {
        return this->image;
    }
}