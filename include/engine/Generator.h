#ifndef TETRISUNLEASHED_GENERATOR_H
#define TETRISUNLEASHED_GENERATOR_H
#include <cstdint>
#include "common/FigureType.h"


class Generator {
public:
    static FigureType generate(uint32_t& rngState);

private:
    static uint32_t nextRandom(uint32_t& state);
};


#endif //TETRISUNLEASHED_GENERATOR_H
