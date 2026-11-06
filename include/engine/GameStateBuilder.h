#ifndef TETRISUNLEASHED_GAMESTATEBUILDER_H
#define TETRISUNLEASHED_GAMESTATEBUILDER_H
#include "common/FigureType.h"
#include "common/Rotation.h"

class GameState;

class GameStateBuilder {
public:
    GameStateBuilder();

    GameStateBuilder& setBoard(Board board);
    GameStateBuilder& setRngState(uint32_t rngState);
    GameStateBuilder& setTick(int tick);
    
    GameStateBuilder& setActiveFigure(FigureType figure);
    GameStateBuilder& setActiveFigureX(int x);
    GameStateBuilder& setActiveFigureY(int y);
    GameStateBuilder& setActiveFigureRotation(Rotation rotation);

    GameStateBuilder& setScore(int score);
    GameStateBuilder& setLevel(int level);
    GameStateBuilder& setTotalRowsCleared(int rowsCleared);

    GameStateBuilder& setNextFigure(FigureType figure);

    GameState build();

private:
    Board board;
    uint32_t rngState;
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
