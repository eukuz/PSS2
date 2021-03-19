//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_DIRECTORCABINET_H
#define HW2_DIRECTORCABINET_H


#include "Room.h"
#include "../Users/Director.h"

class DirectorCabinet : public Room {
public:
    DirectorCabinet(int amountOfPlaces, int floor, access accessLvl, Director *director);

    void Print() override;

    Director *director;
};


#endif //HW2_DIRECTORCABINET_H
