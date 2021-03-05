//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_CABINET_H
#define HW2_CABINET_H


#include "Room.h"
#include "../Users/Professor.h"

class Cabinet: public Room {
public:
    Professor professor;

    Cabinet(int amountOfPlaces, access accessLvl, const Professor &professor);
};


#endif //HW2_CABINET_H
