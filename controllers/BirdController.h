#ifndef BIRDCONTROLLER_H
#define BIRDCONTROLLER_H

#include "models/Bird.h"

class BirdController {
public:
    BirdController();

    void spawnBird();
    void updateBirds();
    void handleBirdCollision(const Bullet& bullet);

private:
    std::vector<Bird> birds;

    // Add any additional private members or helper functions here
};

#endif // BIRDCONTROLLER_H
