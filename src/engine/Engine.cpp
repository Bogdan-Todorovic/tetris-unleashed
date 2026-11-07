#include "../../include/engine/Engine.h"
#include "engine/FigureMaker.h"
#include "engine/Generator.h"
#include "engine/LegalMoveEval.h"
#include "engine/MoveEffectEval.h"
#include "engine/Scorer.h"

Engine::Engine(Generator &generator, Board &board, Scorer &scorer, LegalMoveEval &legalMoveEval,
               MoveEffectEval &moveEffectEval) : generator(generator), board(board), scorer(scorer), legalMoveEval(legalMoveEval), moveEffectEval(moveEffectEval) {
}

void Engine::step(Command command, GameState& gameState) {
    if (command.type == CommandType::NONE)
        return;

    std::array<uint16_t, Constants::FIGURE_ROWS> figure{};
    if (gameState.figureExist) {
        figure = gameState.activeFigure;
    } else {
        FigureType type = Generator::generate(gameState.rngState);

        figure = FigureMaker::makeFigure(type);
        gameState.activeFigure = figure;
        gameState.activeFigureX = Constants::START_X;
        gameState.activeFigureY = Constants::START_Y;
        gameState.figureExist = true;

        if (LegalMoveEval::isGameOver(gameState.board, figure)) {
            gameState.gameOver = true;
            return;
        }
    }

    int descend = 0;
    if (LegalMoveEval::isLegal(command, gameState.board, figure, gameState.activeFigureY, gameState.activeFigureX, descend)) {
        MoveEffectEval::evaluate(command, gameState, 0);
    } else {
        if (command.type == CommandType::SOFT_DROP || command.type == CommandType::HARD_DROP) {
            gameState.board.setFigure(figure, gameState.activeFigureX, gameState.activeFigureY);

            Scorer::increaseScore(gameState.board.clearFullRows(), gameState.score);
            Scorer::increaseLevel(gameState.score);

            gameState.figureExist = false;
        }
    }
}
