//
// Created by Eugene on 3/5/2021.
//

#include "ClassRoom.h"
ClassRoom::ClassRoom(int amountOfPlaces, access accessLvl, bool isThereAProjector) : Room(
        amountOfPlaces, accessLvl), isThereAProjector(isThereAProjector) {}