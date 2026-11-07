#include "../../include/engine/GameStateBuilder.h"
#include "../../include/engine/Board.h"
#include "../../include/engine/GameState.h"

GameStateBuilder::GameStateBuilder() = default;

GameStateBuilder & GameStateBuilder::setBoard(const Board &board_) {
    this->board = board_;
    return *this;
}

GameStateBuilder & GameStateBuilder::setRngState(uint32_t rngState_) {
    this->rngState = rngState_;
    return *this;
}

GameStateBuilder & GameStateBuilder::setTick(int tick_) {
    this->tick = tick_;
    return *this;
}

GameStateBuilder & GameStateBuilder::setFigure(std::array<uint16_t, Constants::FIGURE_ROWS> figure) {
    this->activeFigure = figure;
    return *this;
}

GameStateBuilder & GameStateBuilder::setActiveFigureType(FigureType figureType) {
    this->activeFigureType = figureType;
    return *this;
}

GameStateBuilder & GameStateBuilder::setActiveFigureX(int x) {
    this->activeFigureX = x;
    return *this;
}

GameStateBuilder & GameStateBuilder::setActiveFigureY(int y) {
    this->activeFigureY = y;
    return *this;
}

GameStateBuilder & GameStateBuilder::setActiveFigureRotation(Rotation rotation) {
    this->activeFigureRotation = rotation;
    return *this;
}

GameStateBuilder & GameStateBuilder::setScore(int score_) {
    this->score = score_;
    return *this;
}

GameStateBuilder & GameStateBuilder::setLevel(int level_) {
    this->level = level_;
    return *this;
}

GameStateBuilder & GameStateBuilder::setTotalRowsCleared(int rowsCleared) {
    this->totalRowsCleared = rowsCleared;
    return *this;
}

GameStateBuilder & GameStateBuilder::setNextFigure(FigureType figure) {
    this->nextFigure = figure;
    return *this;
}

GameState GameStateBuilder::build() const {
    return GameState(*this);
}
