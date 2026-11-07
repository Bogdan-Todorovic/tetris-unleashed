#include "../../include/engine/Board.h"

Board::Board() = default;

int Board::clearFullRows() {
    int clearedRows = 0;

    for (int i = ROWS - 1; i >= 0; i--) {
        if ((field[i] & FULL_ROW) == FULL_ROW) {
            clearedRows++;
            updateField(i);
            i++;
        }
    }

    return clearedRows;
}

void Board::setFigure(std::array<uint16_t, 4> figure, int y) {
    for (int i = 0; i < 4; i++)
        field[y+i] |= figure[i];
}

void Board::updateField(int row) {
    for (int i = row; i > 0; i--)
        field[i] = field[i-1];

    field[ROWS-1] = 0;
}
