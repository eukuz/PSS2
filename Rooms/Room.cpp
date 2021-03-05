//
// Created by Eugene on 3/5/2021.
//

#include "Room.h"
int Room::roomNumberIncrement =0;
Room::Room(int amountOfPlaces, access accessLvl) : amountOfPlaces(amountOfPlaces),
                                                                   roomNumber(roomNumberIncrement++), accessLvl(accessLvl) {}

int Room::getNumber() {
    return roomNumber;
}
