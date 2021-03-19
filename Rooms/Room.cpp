//
// Created by Eugene on 3/5/2021.
//

#include "Room.h"
#include "../Users/User.h"
#include "LectureRoom.h"
#include "ConferenceRoom.h"

using namespace std;

class User;

int Room::roomNumberIncrement = 0;
vector<Room *> Room::rooms;

Room::Room(int amountOfPlaces, int floor, access accessLvl) : amountOfPlaces(amountOfPlaces),
                                                              roomNumber(roomNumberIncrement++), floor(floor),
                                                              accessLvl(accessLvl) {
    Room::rooms.push_back(this);

    bool isOKforBlue = false;
    LectureRoom *lr = dynamic_cast<LectureRoom *>(this);
    ConferenceRoom *cr = dynamic_cast <ConferenceRoom *> (this);
    if (this->floor == 1 && (lr or cr)) isOKforBlue = true;

    for (User *user: User::users)
        if (user->accessType >= this->accessLvl) {
            if (user->accessType != blue || isOKforBlue)
                user->myRooms.push_back(this->getNumber());
        }

}

int Room::getNumber() {
    return roomNumber;
}

void Room::doNothing() {
//Todo Change this method to some print-output
}
