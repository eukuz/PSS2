//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_ROOM_H
#define HW2_ROOM_H
#include <string>
#include "../access.h"
using namespace std;

class Room {
private:
    int roomNumber;

public:
    static int roomNumberIncrement;
    int amountOfPlaces;
    access accessLvl;
    int getNumber();
    Room(int amountOfPlaces, access accessLvl);

};



#endif //HW2_ROOM_H
