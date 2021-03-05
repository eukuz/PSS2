//
// Created by Eugene on 3/5/2021.
//

#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(int amountOfPlaces, access accessLvl, int numberOfMicrophones) : Room(
        amountOfPlaces,  accessLvl), numberOfMicrophones(numberOfMicrophones) {}
