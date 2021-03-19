//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_CLASSROOM_H
#define HW2_CLASSROOM_H


#include "Room.h"

class ClassRoom : public Room {
public:

    void Print() override;

    ClassRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAProjector);

    bool isThereAProjector;

};


#endif //HW2_CLASSROOM_H


