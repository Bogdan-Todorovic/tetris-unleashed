#ifndef TETRISUNLEASHED_FIGUREMAKER_H
#define TETRISUNLEASHED_FIGUREMAKER_H
#include <array>
#include "common/Constants.h"
#include "common/FigureType.h"


class FigureMaker {
public:
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigure(FigureType type);

private:
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigureO();
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigureI();
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigureS();
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigureZ();
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigureL();
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigureJ();
    static std::array<uint16_t, Constants::FIGURE_ROWS> makeFigureT();
};


#endif //TETRISUNLEASHED_FIGUREMAKER_H
