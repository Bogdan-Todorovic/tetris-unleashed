#include "../../include/engine/FigureTransformator.h"

std::array<uint16_t, Constants::FIGURE_ROWS> FigureTransformator::rotate(std::array<uint16_t, Constants::FIGURE_ROWS> &figure,
                                                          RotationDirection direction) {
    std::array<uint16_t, Constants::FIGURE_ROWS> rotated = {0, 0, 0, 0};
    if (direction == RotationDirection::CLOCKWISE) {
        // Clockwise
        rotated[0] = ((figure[3] & 1) << 3) | ((figure[2] & 1) << 2) | ((figure[1] & 1) << 1) | (figure[0] & 1);
        rotated[1] = ((figure[3] & 2) << 2) | ((figure[2] & 2) << 1) |  (figure[1] & 2) |((figure[0] & 2) >> 1);
        rotated[2] = ((figure[3] & 4) << 1) | (figure[2] & 4) | ((figure[1] & 4) >> 1) | ((figure[0] & 4) >> 2);
        rotated[3] =  (figure[3] & 8)| ((figure[2] & 8) >> 1) | ((figure[1] & 8) >> 2) | ((figure[0] & 8) >> 3);
    } else {
        // Counter-Clockwise
        rotated[0] = ((figure[0] & 8)) | ((figure[1] & 8) >> 1) | ((figure[2] & 8) >> 2) | ((figure[3] & 8) >> 3);
        rotated[1] = ((figure[0] & 4) << 1) | ((figure[1] & 4)) | ((figure[2] & 4) >> 1) | ((figure[3] & 4) >> 2);
        rotated[2] = ((figure[0] & 2) << 2) | ((figure[1] & 2) << 1) | ((figure[2] & 2)) | ((figure[3] & 2) >> 1);
        rotated[3] = ((figure[0] & 1) << 3) | ((figure[1] & 1) << 2) | ((figure[2] & 1) << 1) | ((figure[3] & 1));
    }

    return rotated;
}
