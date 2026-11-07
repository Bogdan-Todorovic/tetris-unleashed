#ifndef TETRISUNLEASHED_CLOCKMOVEADAPTER_H
#define TETRISUNLEASHED_CLOCKMOVEADAPTER_H
#include "engine/Command.h"
#include <chrono>

#include "MoveAdapter.h"

class ClockMoveAdapter : public MoveAdapter{
public:
    explicit ClockMoveAdapter(std::chrono::milliseconds interval);
    Command createCommand() override;

private:
    std::chrono::steady_clock::time_point lastDrop;
    std::chrono::milliseconds interval{};
};


#endif //TETRISUNLEASHED_CLOCKMOVEADAPTER_H
