#include "PointController.h"

PointController::PointController() : totalPoints(0) {
    // Initialize any members or perform setup here
}

void PointController::addPoints(int points) {
    totalPoints += points;
    // Implement any additional logic here
}

void PointController::subtractPoints(int points) {
    totalPoints -= points;
    // Implement any additional logic here
}

int PointController::getTotalPoints() {
    return totalPoints;
}
