#ifndef TETRISUNLEASHED_FIGUREMAKER_H
#define TETRISUNLEASHED_FIGUREMAKER_H
#include <array>

#include "common/FigureType.h"


class FigureMaker {
public:
    std::array<uint16_t, 4> makeFigure(FigureType type);

private:
    static std::array<uint16_t, 4> makeFigureO();
    static std::array<uint16_t, 4> makeFigureI();
    static std::array<uint16_t, 4> makeFigureS();
    static std::array<uint16_t, 4> makeFigureZ();
    static std::array<uint16_t, 4> makeFigureL();
    static std::array<uint16_t, 4> makeFigureT();
};


#endif //TETRISUNLEASHED_FIGUREMAKER_H
