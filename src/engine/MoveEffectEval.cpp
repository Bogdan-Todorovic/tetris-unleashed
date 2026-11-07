#include "../../include/engine/MoveEffectEval.h"
#include "engine/FigureTransformator.h"
#include "common/CommandType.h"

void MoveEffectEval::evaluate(Command command, GameState& gameState, int descend) {
    switch (command.type) {
        case CommandType::MOVE_LEFT:
            moveLeft(gameState.activeFigureX);
            break;
        case CommandType::MOVE_RIGHT:
            moveRight(gameState.activeFigureX);
            break;
        case CommandType::ROTATE:
            rotate(gameState.activeFigure, command.direction);
            break;
        case CommandType::SOFT_DROP:
            softDrop(gameState.activeFigureY);
            break;
        case CommandType::HARD_DROP:
            hardDrop(gameState.activeFigureY, descend);
            break;
        case CommandType::PLACE:
            break;
        case CommandType::NONE:
            break;
    }
}

void MoveEffectEval::moveLeft(int &x) {
    x++;
}

void MoveEffectEval::moveRight(int &x) {
    x--;
}

void MoveEffectEval::rotate(std::array<uint16_t, Constants::FIGURE_ROWS> &figure, RotationDirection direction) {
    figure = FigureTransformator::rotate(figure, direction);
}

void MoveEffectEval::softDrop(int &y) {
    y++;
}

void MoveEffectEval::hardDrop(int &y, int descend) {
    y += descend;
}
