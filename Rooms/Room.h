//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_ROOM_H
#define HW2_ROOM_H
#include <string>
#include "../access.h"
using namespace std;

class Room {
public:
    int amountOfPlaces;
    int roomNumber;
    access accessLvl;

    Room(int amountOfPlaces, int roomNumber, access accessLvl);

};


#endif //HW2_ROOM_H
