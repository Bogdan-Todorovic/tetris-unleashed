#ifndef TETRIS_UNLEASHED_GAMELOOP_H
#define TETRIS_UNLEASHED_GAMELOOP_H
#include <memory>
#include "engine/GameState.h"

class Engine;
class MoveAdapter;

class GameLoop {
public:
    GameLoop(std::unique_ptr<Engine> engine, std::unique_ptr<MoveAdapter>, GameState gameState);
    void play();

private:
    std::unique_ptr<Engine> engine;
    std::unique_ptr<MoveAdapter> moveAdapter;
    GameState gameState;
};


#endif //TETRIS_UNLEASHED_GAMELOOP_H
