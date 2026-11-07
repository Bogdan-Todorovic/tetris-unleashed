#ifndef TETRISUNLEASHED_BOARD_H
#define TETRISUNLEASHED_BOARD_H
#include <array>


class Board {
public:
    static constexpr int ROWS = 20;
    static constexpr uint16_t EMPTY_ROW = 0;
    static constexpr uint16_t FULL_ROW = 0b1111111111;

    Board();
    int clearFullRows();
    void setFigure(std::array<uint16_t, 4> figure, int y);

private:
    void updateField(int row);
    std::array<uint16_t, ROWS> field{0};
};


#endif //TETRISUNLEASHED_BOARD_H
