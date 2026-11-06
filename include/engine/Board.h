#ifndef TETRISUNLEASHED_BOARD_H
#define TETRISUNLEASHED_BOARD_H
#include <array>


class Board {
public:
    Board();
    int clearFullRows();
    void setFigure(std::array<uint16_t, 4> figure, int x, int y);

private:
    std::array<uint16_t, 20> field;
};


#endif //TETRISUNLEASHED_BOARD_H
