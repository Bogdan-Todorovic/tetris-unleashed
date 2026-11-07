#include "../../include/engine/Generator.h"

FigureType Generator::generate(uint32_t &rngState) {
    uint32_t randomNumber = nextRandom(rngState);
    return static_cast<FigureType>(randomNumber % 7);
}

uint32_t Generator::nextRandom(uint32_t &state) {
    state ^= state << 13;
    state ^= state >> 17;
    state ^= state << 5;

    return state;
}
