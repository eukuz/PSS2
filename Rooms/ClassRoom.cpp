//
// Created by Eugene on 3/5/2021.
//

#include "ClassRoom.h"

ClassRoom::ClassRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAProjector) : Room(
        amountOfPlaces, floor, accessLvl), isThereAProjector(isThereAProjector) {}

void ClassRoom::doNothing() {

}
