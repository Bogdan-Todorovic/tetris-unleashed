#ifndef TETRISUNLEASHED_CONSTANTS_H
#define TETRISUNLEASHED_CONSTANTS_H

namespace Constants{
    inline constexpr int ROWS = 20;
    inline constexpr int COLS = 10;
    inline constexpr int FIGURE_ROWS = 4;

    inline constexpr int FULL_ROW = 0b1111111111;
    inline constexpr int EMPTY_ROW = 0;

    inline constexpr int LEFT_BORDER = 1u << (COLS - 1);
    inline constexpr int RIGHT_BORDER = 1;

    inline constexpr int START_X = 3;
    inline constexpr int START_Y = 0;
}

#endif //TETRISUNLEASHED_CONSTANTS_H
