#ifndef SCORECONTROLLER_H
#define SCORECONTROLLER_H

class ScoreController {
public:
    ScoreController();

    void increaseScore(int points);
    void decreaseScore(int points);
    int getScore();

private:
    int score;

    // Add any additional private members or helper functions here
};

#endif // SCORECONTROLLER_H
