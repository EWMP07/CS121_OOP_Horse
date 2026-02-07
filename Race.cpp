#include "Race.h"
#include <iostream>

Race::Race(int length) : trackLength(length),
    horses{
        Horse(1), Horse(2), Horse(3), Horse(4), Horse(5)
    } {}

void Race::printRace() {
    for (int i = 0; i < NUM_HORSES; i++) {
        horses[i].printLane(trackLength);
    }
    std::cout << std::endl;
}

bool Race::hasWinner() {
    for (int i = 0; i < NUM_HORSES; i++) {
        if (horses[i].hasWon(trackLength)) {
            return true;
        }
    }
    return false;
}

void Race::run() {
    while (!hasWinner()) {
        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance();
        }
        printRace();
    }

    std::cout << "We have a winner!" << std::endl;
}