//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_CONFERENCEROOM_H
#define HW2_CONFERENCEROOM_H


#include "Room.h"

class ConferenceRoom : public Room {
private:
    void doNothing() override;

public:
    int numberOfMicrophones;

    ConferenceRoom(int amountOfPlaces, int floor, access accessLvl, int numberOfMicrophones);

};


#endif //HW2_CONFERENCEROOM_H
