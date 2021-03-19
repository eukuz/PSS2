//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_LECTUREROOM_H
#define HW2_LECTUREROOM_H


#include "Room.h"

class LectureRoom : public Room {

public:
    void Print() override;

    bool isThereAFireExit;


    LectureRoom(int amountOfPlaces, int floor, access accessLvl, bool isThereAFireExit);
};


#endif //HW2_LECTUREROOM_H
