# CS121_OOP_Horse
## UML Diagram

```mermaid(I used Mermaid Live Editor)
classDiagram

class Horse {
    -int position
    -int horseNumber
    +Horse(int)
    +advance()
    +printLane(int)
    +isWinner(int)
}

note for Horse
advance():
1. Generate random number
2. If odd, move forward one space

isWinner():
1. Compare position to track length
2. Return true if finished
end note

class Race {
    -static const int NUM_HORSES
    -int trackLength
    -Horse horses[NUM_HORSES]
    +Race(int)
    +run()
    +hasWinner()
    +printRace()
}

note for Race
run():
1. Loop until a winner exists
2. Advance each horse
3. Print the race

hasWinner():
1. Check each horse
2. Return true if any horse won
end note

Race --> Horse