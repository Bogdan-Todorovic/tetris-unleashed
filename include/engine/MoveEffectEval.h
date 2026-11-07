#ifndef TETRISUNLEASHED_MOVEEFFECTEVAL_H
#define TETRISUNLEASHED_MOVEEFFECTEVAL_H
#include "Board.h"
#include "Command.h"
#include "GameState.h"


class MoveEffectEval {
public:
    static void evaluate(Command command, GameState &gameState, int descend);

private:
    static void moveLeft(int& x);
    static void moveRight(int& x);
    static void rotate(std::array<uint16_t, Constants::FIGURE_ROWS> &figure, RotationDirection direction);
    static void softDrop(int& y);
    static void hardDrop(int &y, int descend);
};


#endif //TETRISUNLEASHED_MOVEEFFECTEVAL_H
