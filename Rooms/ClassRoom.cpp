
#include "ClassRoom.h"

void ClassRoom::Print() {

    cout << "Class room ";
    Room::Print();
}

ClassRoom::ClassRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAProjector) : Room(
        amountOfPlaces, floor, accessLvl), isThereAProjector(isThereAProjector) {
}

