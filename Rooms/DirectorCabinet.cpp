//
// Created by Eugene on 3/5/2021.
//

#include "DirectorCabinet.h"

DirectorCabinet::DirectorCabinet(int amountOfPlaces,  access accessLvl, const Director &director) : Room(
        amountOfPlaces, accessLvl), director(director) {}
