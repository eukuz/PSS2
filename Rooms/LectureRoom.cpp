
#include "LectureRoom.h"

void LectureRoom::Print() {

    cout << "Lecture room ";
    Room::Print();
}

LectureRoom::LectureRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAFireExit) : Room(
        amountOfPlaces, floor, accessLvl), isThereAFireExit(isThereAFireExit) {
}

