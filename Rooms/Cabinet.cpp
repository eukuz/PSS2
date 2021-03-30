
#include "Cabinet.h"

void Cabinet::Print() {

    cout << "Cabinet ";
    Room::Print();
}

Cabinet::Cabinet(int amountOfPlaces, int floor, access accessLvl, Professor *professor) : Room(
        amountOfPlaces, floor, accessLvl), professor(professor) {
}

