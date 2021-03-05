//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_CLASSROOM_H
#define HW2_CLASSROOM_H


#include "Room.h"

class ClassRoom: public Room {
public:
    ClassRoom(int amountOfPlaces, access accessLvl, bool isThereAProjector);

public:
    bool isThereAProjector;

};


#endif //HW2_CLASSROOM_H


