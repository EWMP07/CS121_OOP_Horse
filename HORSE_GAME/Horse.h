#ifndef HORSE_H
#define HORSE_H

class Horse {
private:
    int position;
    int horseNumber;

public:
    Horse(int number);
    void advance();
    bool hasWon(int trackLength);
    void printLane(int trackLength);
};

#endif