//
// Created by kakarotto on 1/3/17.
//

#include "Exception.h"

namespace skmn {
    Exception::Exception(const std::string &__arg) : runtime_error(__arg) {}

    Exception::Exception(const char *__arg) : runtime_error(__arg) {}
}