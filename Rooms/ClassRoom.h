#ifndef _CLASSROOM_H
#define _CLASSROOM_H


#include "Room.h"

class ClassRoom : public Room {
public:
    void Print() override;

    ClassRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAProjector);

    bool isThereAProjector;

};

#endif
