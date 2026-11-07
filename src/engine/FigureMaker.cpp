#include "../../include/engine/FigureMaker.h"

std::array<uint16_t, 4> FigureMaker::makeFigure(FigureType type) {
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

        case FigureType::T:
            return makeFigureT();

        default:
            throw std::invalid_argument("Invalid Figure");
    }
}

std::array<uint16_t, 4> FigureMaker::makeFigureO() {
    return {
        0b0000000000,
        0b0000110000,
        0b0000110000,
        0b0000000000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureI() {
    return {
        0b0001111000,
        0b0000000000,
        0b0000000000,
        0b0000000000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureS() {
    return {
        0b0000000000,
        0b0000110000,
        0b0001100000,
        0b0000000000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureZ() {
    return {
        0b0000000000,
        0b0001100000,
        0b0000110000,
        0b0000000000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureL() {
    return {
        0b0000100000,
        0b0000100000,
        0b0000110000,
        0b0000000000
    };
}

std::array<uint16_t, 4> FigureMaker::makeFigureT() {
    return {
        0b0000000000,
        0b0000100000,
        0b0001110000,
        0b0000000000
    };
}
