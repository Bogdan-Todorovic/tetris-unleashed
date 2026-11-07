#include "../../include/engine/FigureMaker.h"

std::array<unsigned short, Constants::FIGURE_ROWS> FigureMaker::makeFigure(FigureType type) {
    switch (type) {
        case FigureType::O:
            return makeFigureO();

        case FigureType::I:
            return makeFigureI();

        case FigureType::S:
            return makeFigureS();

        case FigureType::Z:
            return makeFigureZ();

        case FigureType::L:
            return makeFigureL();

        case FigureType::J:
            return makeFigureJ();

        case FigureType::T:
            return makeFigureT();

        default:
            throw std::invalid_argument("Invalid Figure");
    }
}

std::array<uint16_t, 4> FigureMaker::makeFigureO() {
    return {
        0b0000,
        0b0110,
        0b0110,
        0b0000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureI() {
    return {
        0b0010,
        0b0010,
        0b0010,
        0b0010
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureS() {
    return {
        0b0000,
        0b0110,
        0b1100,
        0b0000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureZ() {
    return {
        0b0000,
        0b1100,
        0b0110,
        0b0000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureL() {
    return {
        0b0100,
        0b0100,
        0b0110,
        0b0000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureJ() {
    return {
        0b0010,
        0b0010,
        0b0110,
        0b0000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureT() {
    return {
        0b0000,
        0b0010,
        0b0111,
        0b0000
    };
}
