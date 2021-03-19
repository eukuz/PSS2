//
// Created by Eugene on 3/5/2021.
//

#include <iostream>
#include "ClassRoom.h"

ClassRoom::ClassRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAProjector) : Room(
        amountOfPlaces, floor, accessLvl), isThereAProjector(isThereAProjector) {}

void ClassRoom::Print() {
    cout << "Class room ";
    Room::Print();
}
