#ifndef TETRISUNLEASHED_SCORER_H
#define TETRISUNLEASHED_SCORER_H


class Scorer {
public:
    Scorer();
    static int increaseScore(int clearedRows, int currentScore);
    static int increaseLevel(int currentScore);
};


#endif //TETRISUNLEASHED_SCORER_H
