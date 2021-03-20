#ifndef _CABINET_H
#define _CABINET_H


#include "Room.h"

class Professor;

class Cabinet : public Room {
public:
    Professor *professor;

    void Print() override;

    Cabinet(int amountOfPlaces, int floor, access accessLvl, Professor *professor);

};

#endif
