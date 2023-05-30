#include "ScoreController.h"

ScoreController::ScoreController() : score(0) {
    // Initialize any members or perform setup here
}

void ScoreController::increaseScore(int points) {
    score += points;
    // Implement any additional logic here
}

void ScoreController::decreaseScore(int points) {
    score -= points;
    // Implement any additional logic here
}

int ScoreController::getScore() {
    return score;
}
