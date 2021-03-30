
#include "ConferenceRoom.h"

void ConferenceRoom::Print() {

    cout << "Conference room ";
    Room::Print();
}

ConferenceRoom::ConferenceRoom(int amountOfPlaces, int floor, access accessLvl, int numberOfMicrophones) : Room(
        amountOfPlaces, floor, accessLvl), numberOfMicrophones(numberOfMicrophones) {
}

