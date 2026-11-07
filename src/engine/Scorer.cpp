#include "../../include/engine/Scorer.h"

Scorer::Scorer() = default;

int Scorer::increaseScore(int clearedRows, int currentScore) {
    return clearedRows*100 + currentScore;
}

int Scorer::increaseLevel(int currentScore) {
    return currentScore / 1000 + 1;
}
