#ifndef TETRISUNLEASHED_LEGALMOVEEVAL_H
#define TETRISUNLEASHED_LEGALMOVEEVAL_H
#include <sys/types.h>

#include "Board.h"
#include "Command.h"


class LegalMoveEval {
public:
    static bool isLegal(Command command, const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS>, int y, int x, int descend);
    static bool isGameOver(const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS>, int x = Constants::START_X);

private:
    static bool checkLeft(const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x);
    static bool checkRight(const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x);
    static bool checkRotate(RotationDirection direction, const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x);
    static bool checkSoftDrop(const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x);
    static bool checkHardDrop(const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x, int& descend);
};


#endif //TETRISUNLEASHED_LEGALMOVEEVAL_H
