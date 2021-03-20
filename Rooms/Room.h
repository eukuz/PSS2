//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_ROOM_H
#define HW2_ROOM_H

#include <iostream>
#include <string>
#include <vector>
#include "../access.h"
#include "../systemState.h"

using namespace std;

class Room {
private:
    int roomNumber;


public:
    virtual void Print();

    static systemState state;
    static int roomNumberIncrement;
    static vector<Room *> rooms;
    int amountOfPlaces;
    int floor;
    access accessLvl;

    int getNumber();

    Room(int amountOfPlaces, int floor, access accessLvl);

};


#endif //HW2_ROOM_H
