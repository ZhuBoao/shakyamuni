//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_EXCEPTION_H
#define SHAKYAMUNI_EXCEPTION_H

#include <stdexcept>

namespace skmn {
    class Exception : public std::runtime_error {
    public:
        Exception(const std::string &__arg);

        Exception(const char *__arg);
    };
}

#endif //SHAKYAMUNI_EXCEPTION_H
