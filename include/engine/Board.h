#ifndef TETRISUNLEASHED_BOARD_H
#define TETRISUNLEASHED_BOARD_H
#include <array>

#include "common/Constants.h"


class Board {
public:
    Board();
    int clearFullRows();
    void setFigure(std::array<unsigned short, 4> figure, int x, int y);

    [[nodiscard]] std::array<uint16_t, Constants::ROWS> getField() const;

private:
    void updateField(int row);
    std::array<uint16_t, Constants::ROWS> field{0, 0, 0, 0};
};


#endif //TETRISUNLEASHED_BOARD_H
