#ifndef TETRISUNLEASHED_MOVEEFFECTEVAL_H
#define TETRISUNLEASHED_MOVEEFFECTEVAL_H
#include "Board.h"
#include "Command.h"


class MoveEffectEval {
public:
    void evaluate(Command command, Board& board);
};


#endif //TETRISUNLEASHED_MOVEEFFECTEVAL_H
