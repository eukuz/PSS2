//
// Created by Eugene on 3/5/2021.
//

#include "LectureRoom.h"

LectureRoom::LectureRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAFireExit) : Room(
        amountOfPlaces, floor, accessLvl), isThereAFireExit(isThereAFireExit) {}

void LectureRoom::doNothing() {
}
