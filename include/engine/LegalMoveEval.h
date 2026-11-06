#ifndef TETRISUNLEASHED_LEGALMOVEEVAL_H
#define TETRISUNLEASHED_LEGALMOVEEVAL_H
#include "Board.h"
#include "Command.h"


class LegalMoveEval {
public:
    bool isLegal(Command command, const Board& board);
};


#endif //TETRISUNLEASHED_LEGALMOVEEVAL_H
