//
// Created by Eugene on 3/5/2021.
//

#include "Cabinet.h"

Cabinet::Cabinet(int amountOfPlaces, int floor, access accessLvl, Professor *professor) : Room(
        amountOfPlaces, floor, accessLvl), professor(professor) {}

void Cabinet::doNothing() {

}
