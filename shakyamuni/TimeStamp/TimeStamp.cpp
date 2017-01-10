//
// Created by kakarotto on 1/10/17.
//

#include "TimeStamp.h"

namespace skmn {
    TimeStamp::TimeStamp() {
        this->timestamp = 0UL;
    }

    TimeStamp::TimeStamp(const Time &timestamp) {
        this->timestamp = timestamp;
    }

    void TimeStamp::setTime(const Time &timestamp) {
        this->timestamp = timestamp;
    }

    const Time &TimeStamp::getTime() {
        return this->timestamp;
    }
}