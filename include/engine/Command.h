#ifndef TETRISUNLEASHED_COMMAND_H
#define TETRISUNLEASHED_COMMAND_H
#include "common/CommandType.h"
#include "common/Rotation.h"
#include "common/RotationDirection.h"


class Command {
public:
    explicit Command(const CommandType type) : type(type){}

    CommandType type;
    Rotation rotation{};
    RotationDirection direction{};
};


#endif //TETRISUNLEASHED_COMMAND_H
