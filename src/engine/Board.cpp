#include "../../include/engine/Board.h"

Board::Board() = default;

int Board::clearFullRows() {
    int clearedRows = 0;

    for (int i = Constants::ROWS - 1; i >= 0; i--) {
        if ((field[i] & Constants::FULL_ROW) == Constants::FULL_ROW) {
            clearedRows++;
            updateField(i);
            i++;
        }
    }

    return clearedRows;
}

void Board::setFigure(std::array<uint16_t, Constants::FIGURE_ROWS> figure, int x, int y) {
    for (int i = 0; i < Constants::FIGURE_ROWS; i++) {
        field[y + i] |= figure[i] << x;
    }
}

void Board::updateField(int row) {
    for (int i = row; i > 0; i--)
        field[i] = field[i-1];

    field[Constants::ROWS-1] = 0;
}

std::array<uint16_t, Constants::ROWS> Board::getField() const {
    return field;
}
