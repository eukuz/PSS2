//
// Created by Eugene on 3/5/2021.
//

#include "LectureRoom.h"

LectureRoom::LectureRoom(int amountOfPlaces, access accessLvl, bool isThereAFireExit) : Room(
        amountOfPlaces,  accessLvl), isThereAFireExit(isThereAFireExit) {}
