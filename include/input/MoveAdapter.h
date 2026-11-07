#ifndef TETRIS_UNLEASHED_MOVEADAPTER_H
#define TETRIS_UNLEASHED_MOVEADAPTER_H
#include "engine/Command.h"


class MoveAdapter {
public:
    virtual Command createCommand() = 0;

    virtual ~MoveAdapter() = default;
};


#endif //TETRIS_UNLEASHED_MOVEADAPTER_H
