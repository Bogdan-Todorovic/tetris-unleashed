#ifndef TETRISUNLEASHED_FIGUREMAKER_H
#define TETRISUNLEASHED_FIGUREMAKER_H
#include <array>

#include "common/FigureType.h"


class FigureMaker {
public:
    std::array<uint16_t, 4> makeFigure(FigureType type);
};


#endif //TETRISUNLEASHED_FIGUREMAKER_H
