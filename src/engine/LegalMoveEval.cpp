#include "../../include/engine/LegalMoveEval.h"

#include "engine/FigureTransformator.h"

bool LegalMoveEval::isLegal(Command command, const Board &board, std::array<uint16_t, 4> figure, int y, int x, int descend) {
    switch (command.type) {
        case CommandType::MOVE_LEFT:
            return checkLeft(board, figure, y, x);

        case CommandType::MOVE_RIGHT:
            return checkRight(board, figure, y, x);

        case CommandType::ROTATE:
            return checkRotate(command.direction, board, figure, y, x);

        case CommandType::SOFT_DROP:
            return checkSoftDrop(board, figure, y, x);

        case CommandType::HARD_DROP:
            return checkHardDrop(board, figure, y, x, descend);

        case CommandType::PLACE:
            break;

        default:
            break;
    }

    return true;
}

bool LegalMoveEval::checkLeft(const Board& board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x) {
    for (int i = 0; i < Constants::FIGURE_ROWS; i++) {
        if (figure[i] == Constants::EMPTY_ROW)
            continue;

        uint16_t shiftedRow = figure[i] << (x + 1);

        if (shiftedRow > Constants::FULL_ROW)
            return false;

        if ((shiftedRow & board.getField()[y + i]) != 0)
            return false;
    }

    return true;
}

bool LegalMoveEval::checkRight(const Board& board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x) {
    for (int i = 0; i < Constants::FIGURE_ROWS; i++) {
        if (figure[i] == Constants::EMPTY_ROW)
            continue;

        uint16_t currentRow = figure[i] << x;

        if (currentRow & Constants::RIGHT_BORDER)
            return false;

        if ((currentRow >> 1 & board.getField()[y + i]) != 0)
            return false;
    }

    return true;
}

bool LegalMoveEval::checkRotate(RotationDirection direction, const Board& board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x) {
    auto rotated = FigureTransformator::rotate(figure, direction);

    for (int i = 0; i < Constants::FIGURE_ROWS; i++) {
        if (rotated[i] == Constants::EMPTY_ROW)
            continue;

        if (rotated[i] << x > Constants::FULL_ROW)
            return false;

        if (y + i >= Constants::ROWS)
            return false;

        if (rotated[i] << x & board.getField()[y+i])
            return false;
    }

    return true;
}

bool LegalMoveEval::checkSoftDrop(const Board& board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x) {
    for (int i = 0; i < Constants::FIGURE_ROWS; i++) {
        if (figure[i] == Constants::EMPTY_ROW)
            continue;

        if (i + y + 1 >= Constants::ROWS)
            return false;

        if (figure[i] << x & board.getField()[i + y + 1])
            return false;
    }

    return true;
}

bool LegalMoveEval::checkHardDrop(const Board& board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int y, int x, int& descend) {
    while (checkSoftDrop(board, figure, y+descend, x))
        descend++;

    return false;
}

bool LegalMoveEval::isGameOver(const Board &board, std::array<uint16_t, Constants::FIGURE_ROWS> figure, int x) {
    for (int i = 0; i < Constants::FIGURE_ROWS; i++) {
        if (figure[i] == Constants::EMPTY_ROW)
            continue;

        if (figure[i] << x & board.getField()[i])
            return true;
    }

    return false;
}
