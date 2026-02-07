#include "Horse.h"
#include <iostream>
#include <cstdlib>

Horse::Horse(int number) {
    horseNumber = number;
    position = 0;
}

void Horse::advance() {
    if (rand() % 2 == 1) {
        position++;
    }
}

bool Horse::hasWon(int trackLength) {
    return position >= trackLength;
}

void Horse::printLane(int trackLength) {
    for (int i = 0; i < trackLength; i++) {
        if (i == position) {
            std::cout << horseNumber;
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}