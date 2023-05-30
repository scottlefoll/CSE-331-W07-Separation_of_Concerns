#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "BirdController.h"
#include "BulletController.h"

class GameController {
public:
    GameController();

    void startGame();
    void endGame();
    void pauseGame();
    void resumeGame();

private:
    BirdController birdController;
    BulletController bulletController;

    // Add any additional private members or helper functions here
};

#endif // GAMECONTROLLER_H
