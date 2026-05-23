#include "GameController.h"

GameController::GameController(): currentPage(Pages::StartMenu)
{
}

GameController& GameController::instance()
{
    static GameController gameController;

    return gameController;
}

Pages& GameController::getCurrentPage()
{
    return currentPage;
}
