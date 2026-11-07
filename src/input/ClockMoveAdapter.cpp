#include "../../include/input/ClockMoveAdapter.h"
ClockMoveAdapter::ClockMoveAdapter(std::chrono::milliseconds interval) : interval(interval), lastDrop(std::chrono::steady_clock::now()){}

Command ClockMoveAdapter::createCommand() {
    auto now = std::chrono::steady_clock::now();
    auto elapsed = now - lastDrop;

    if (elapsed >= interval) {
        lastDrop = now;
        return Command(CommandType::SOFT_DROP);
    }

    return Command(CommandType::NONE);
}
