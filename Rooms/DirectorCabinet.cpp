//
// Created by Eugene on 3/5/2021.
//

#include "DirectorCabinet.h"

DirectorCabinet::DirectorCabinet(int amountOfPlaces, int floor, access accessLvl, Director *director) : Room(
        amountOfPlaces, floor, accessLvl), director(director) {}

void DirectorCabinet::Print() {
    cout << "Director Cabinet ";
    Room::Print();
}

