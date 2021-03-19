//
// Created by Eugene on 3/5/2021.
//

#include <iostream>
#include "LectureRoom.h"

LectureRoom::LectureRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAFireExit) : Room(
        amountOfPlaces, floor, accessLvl), isThereAFireExit(isThereAFireExit) {}

void LectureRoom::Print() {
    cout << "Lecture room ";
    Room::Print();
}
