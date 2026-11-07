#ifndef TETRISUNLEASHED_GAMESTATEBUILDER_H
#define TETRISUNLEASHED_GAMESTATEBUILDER_H
#include "common/FigureType.h"
#include "common/Rotation.h"
#include "Board.h"

class GameState;

class GameStateBuilder {
public:
    friend class GameState;

    GameStateBuilder();

    GameStateBuilder& setBoard(const Board &board_);
    GameStateBuilder& setRngState(uint32_t rngState_);
    GameStateBuilder& setTick(int tick_);

    GameStateBuilder& setActiveFigure(FigureType figure);
    GameStateBuilder& setActiveFigureX(int x);
    GameStateBuilder& setActiveFigureY(int y);
    GameStateBuilder& setActiveFigureRotation(Rotation rotation);

    GameStateBuilder& setScore(int score_);
    GameStateBuilder& setLevel(int level_);
    GameStateBuilder& setTotalRowsCleared(int rowsCleared);

    GameStateBuilder& setNextFigure(FigureType figure);

    [[nodiscard]] GameState build() const;

private:
    Board board;
    uint32_t rngState{};
    int tick{};

    FigureType activeFigure{};
    int activeFigureX{};
    int activeFigureY{};
    Rotation activeFigureRotation{};

    int score{};
    int level{1};
    int totalRowsCleared{};

    FigureType nextFigure{};
};


#endif //TETRISUNLEASHED_GAMESTATEBUILDER_H
