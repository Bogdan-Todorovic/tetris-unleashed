#ifndef TETRISUNLEASHED_SCORER_H
#define TETRISUNLEASHED_SCORER_H


class Scorer {
public:
    Scorer();
    int increaseScore(int clearedRows, int currentScore);
    int increaseLevel(int currentScore);
};


#endif //TETRISUNLEASHED_SCORER_H
