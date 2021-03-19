//
// Created by Eugene on 3/5/2021.
//

#include <iostream>
#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(int amountOfPlaces, int floor, access accessLvl, int numberOfMicrophones) : Room(
        amountOfPlaces, floor, accessLvl), numberOfMicrophones(numberOfMicrophones) {}

void ConferenceRoom::Print() {
    cout << "Conference room ";
    Room::Print();
}
