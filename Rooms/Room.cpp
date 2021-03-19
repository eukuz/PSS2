//
// Created by Eugene on 3/5/2021.
//

#include "Room.h"
#include "../Users/User.h"
using namespace std;

class User;

int Room::roomNumberIncrement =0;
vector<Room*> Room::rooms;
Room::Room(int amountOfPlaces, access accessLvl) : amountOfPlaces(amountOfPlaces),
                                                                   roomNumber(roomNumberIncrement++), accessLvl(accessLvl)
                                                                   {
    Room::rooms.push_back(this);
    for(User* user: User::users)
        if(user->accessType>=this->accessLvl)
        {

            user->myRooms.push_back(this->getNumber());

        }
                                                                   }

int Room::getNumber() {
    return roomNumber;
}
