#ifndef _DIRECTORCABINET_H
#define _DIRECTORCABINET_H


#include "Room.h"

class Director;

class DirectorCabinet : public Room {
public:
    DirectorCabinet(int amountOfPlaces, int floor, access accessLvl, Director *director);

    void Print() override;

    Director *director;

};

#endif
