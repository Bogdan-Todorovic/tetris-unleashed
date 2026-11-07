#include "../../include/game/GameLoop.h"
#include "../../include/input/ClockMoveAdapter.h"
#include "engine/Engine.h"

GameLoop::GameLoop(std::unique_ptr<ClockMoveAdapter> clockMoveAdapter, std::unique_ptr<ClockMoveAdapter> playerMoveAdapter, GameState gameState) :
    clockMoveAdapter(std::move(clockMoveAdapter)), playerMoveAdapter(std::move(playerMoveAdapter)), gameState(gameState)
    {}

void GameLoop::play() {
    while (!gameState.gameOver) {
        Command command = clockMoveAdapter->createCommand();
        Engine::step(command, gameState);
    }
}
