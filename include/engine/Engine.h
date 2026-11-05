#ifndef TETRIS_UNLEASHED_ENGINE_H
#define TETRIS_UNLEASHED_ENGINE_H
#include "Command.h"
#include "GameState.h"


class Board;
class Scorer;
class LegalMoveEval;
class MoveEffectEval;
class Generator;

class Engine {
public:
    Engine(Generator& generator,
        Board& board,
        Scorer& scorer,
        LegalMoveEval& legalMoveEval,
        MoveEffectEval& moveEffectEval);

    void step(Command command, GameState gameState);

private:
    Generator& generator;
    Board& board;
    Scorer& scorer;
    LegalMoveEval& legalMoveEval;
    MoveEffectEval& moveEffectEval;
};


#endif //TETRIS_UNLEASHED_ENGINE_H
