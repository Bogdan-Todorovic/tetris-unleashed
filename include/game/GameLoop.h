#ifndef TETRIS_UNLEASHED_GAMELOOP_H
#define TETRIS_UNLEASHED_GAMELOOP_H
#include <memory>
#include "engine/GameState.h"
#include "input/ClockMoveAdapter.h"

class Engine;
class MoveAdapter;

class GameLoop {
public:
    GameLoop(std::unique_ptr<ClockMoveAdapter> clockMoveAdapter, std::unique_ptr<ClockMoveAdapter> playerMoveAdapter, GameState gameState);
    void play();

private:
    std::unique_ptr<ClockMoveAdapter> clockMoveAdapter, playerMoveAdapter;
    GameState gameState;
};


#endif //TETRIS_UNLEASHED_GAMELOOP_H
