#ifndef POINTCONTROLLER_H
#define POINTCONTROLLER_H

class PointController {
public:
    PointController();

    void addPoints(int points);
    void subtractPoints(int points);
    int getTotalPoints();

private:
    int totalPoints;

    // Add any additional private members or helper functions here
};

#endif // POINTCONTROLLER_H
