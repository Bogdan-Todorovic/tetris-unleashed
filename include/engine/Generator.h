#ifndef TETRISUNLEASHED_GENERATOR_H
#define TETRISUNLEASHED_GENERATOR_H
#include <cstdint>

#include "common/FigureType.h"


class Generator {
public:
    FigureType generate(uint32_t& rngState);
};


#endif //TETRISUNLEASHED_GENERATOR_H
