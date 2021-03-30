#ifndef _LECTUREROOM_H
#define _LECTUREROOM_H


#include "Room.h"

class LectureRoom : public Room {
public:
    void Print() override;

    bool isThereAFireExit;

    LectureRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAFireExit);

};

#endif
