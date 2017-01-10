//
// Created by kakarotto on 1/10/17.
//

#ifndef SHAKYAMUNI_TIMESTAMP_H
#define SHAKYAMUNI_TIMESTAMP_H

#include <shakyamuni/Types/types.h>

namespace skmn {
    class TimeStamp {
    private:
        Time timestamp;
    public:
        TimeStamp() = default;

        TimeStamp(const Time &timestamp);

        void setTime(const Time &timestamp);

        const Time &getTime();
    };
}

#endif //SHAKYAMUNI_TIMESTAMP_H
