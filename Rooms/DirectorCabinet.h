//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_DIRECTORCABINET_H
#define HW2_DIRECTORCABINET_H


#include "Room.h"
#include "../Users/Director.h"

class DirectorCabinet: public Room {
public:
    DirectorCabinet(int amountOfPlaces, access accessLvl, Director &director);

private:
    Director& director;
};


#endif //HW2_DIRECTORCABINET_H
