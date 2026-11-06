#ifndef TETRIS_UNLEASHED_GAMESTATE_H
#define TETRIS_UNLEASHED_GAMESTATE_H
#include "Board.h"
#include "GameStateBuilder.h"
#include "common/FigureType.h"
#include "common/Rotation.h"

class GameState {
public:
    Board board;
    uint32_t rngState;
    int tick;
    FigureType activeFigure;
    int activeFigureX;
    int activeFigureY;
    Rotation activeFigureRotation;
    int score;
    int level;
    int totalRowsCleared;
    FigureType nextFigure;

    explicit GameState(const GameStateBuilder &builder);
};


#endif //TETRIS_UNLEASHED_GAMESTATE_H
