#ifndef TETRISUNLEASHED_FIGURETRANSFORMATOR_H
#define TETRISUNLEASHED_FIGURETRANSFORMATOR_H
#include <array>

#include "common/Constants.h"
#include "common/RotationDirection.h"


class FigureTransformator {
public:
    static std::array<uint16_t, Constants::FIGURE_ROWS> rotate(std::array<uint16_t, Constants::FIGURE_ROWS> &figure, RotationDirection direction);
};


#endif //TETRISUNLEASHED_FIGURETRANSFORMATOR_H
