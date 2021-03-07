//
// Created by Eugene on 3/5/2021.
//

#include "Cabinet.h"

Cabinet::Cabinet(int amountOfPlaces,  access accessLvl,  Professor &professor) : Room(
        amountOfPlaces,  accessLvl), professor(professor) {}
