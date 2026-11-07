#include "../../include/engine/GameState.h"

GameState::GameState(const GameStateBuilder &builder) {
    this->board = builder.board;
    this->rngState = builder.rngState;
    this->tick = builder.tick;
    this->activeFigure = builder.activeFigure;
    this->activeFigureX = builder.activeFigureX;
    this->activeFigureY = builder.activeFigureY;
    this->activeFigureRotation = builder.activeFigureRotation;
    this->score = builder.score;
    this->level = builder.level;
    this->totalRowsCleared = builder.totalRowsCleared;
    this->nextFigure = builder.nextFigure;
}
