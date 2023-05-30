#ifndef BULLETCONTROLLER_H
#define BULLETCONTROLLER_H

#include "models/Bullet.h"

class BulletController {
public:
    BulletController();

    void fireBullet();
    void updateBullets();
    void handleBulletCollision(const Bird& bird);

private:
    std::vector<Bullet> bullets;

    // Add any additional private members or helper functions here
};

#endif // BULLETCONTROLLER_H
