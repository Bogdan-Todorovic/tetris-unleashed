
#include "engine/GameState.h"
#include "engine/GameStateBuilder.h"
#include "input/ClockMoveAdapter.h"
#include <chrono>

#include "game/GameLoop.h"

int main() {
    GameStateBuilder gameStateBuilder;
    GameState gameState = gameStateBuilder.setRngState(123456).build();
    auto clockMoveAdapter = std::make_unique<ClockMoveAdapter>(std::chrono::milliseconds(50));
    auto clockMoveAdapter1 = std::make_unique<ClockMoveAdapter>(std::chrono::milliseconds(250));

    GameLoop gameLoop((std::move(clockMoveAdapter)), (std::move(clockMoveAdapter1)), gameState);
    gameLoop.play();
}
