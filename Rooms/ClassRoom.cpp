//
// Created by Eugene on 3/5/2021.
//

#include "ClassRoom.h"
ClassRoom::ClassRoom(int amountOfPlaces, int roomNumber, access accessLvl, bool isThereAProjector) : Room(
        amountOfPlaces, roomNumber, accessLvl), isThereAProjector(isThereAProjector) {}