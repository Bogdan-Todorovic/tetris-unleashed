#include "../../include/engine/GameState.h"

GameState::GameState(const GameStateBuilder &builder) {
    this->board = builder.board;
    this->rngState = builder.rngState;
    this->tick = builder.tick;
    this->activeFigure = builder.activeFigure;
    this->activeFigureType = builder.activeFigureType;
    this->activeFigureX = 3;
    this->activeFigureY = 0;
    this->activeFigureRotation = builder.activeFigureRotation;
    this->score = builder.score;
    this->level = builder.level;
    this->totalRowsCleared = builder.totalRowsCleared;
    this->nextFigure = builder.nextFigure;
}
