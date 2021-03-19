//
// Created by Eugene on 3/5/2021.
//
#include "../access.h"
#include "User.h"
#include "../Rooms/Room.h"
#include <iostream>

vector<User*> User::users;
vector<int> myRooms;
User::User(const string &firstName, const string &lastName, access accessType) : firstName(firstName),
                                                                                 lastName(lastName),
                                                                                 accessType(accessType) {
    for(Room* room: Room::rooms){
        if (room->accessLvl<= this->accessType)
            this->myRooms.push_back(room->getNumber());
    }
}
bool User::TryEnter(int roomNumber) {
    for (int roomN:this->myRooms){
        if(roomNumber == roomN)
            return true;
    }
    return false;
}
