//
// Created by Eugene on 3/5/2021.
//
#include "../access.h"
#include "User.h"
#include "../Rooms/Room.h"
#include "../Rooms/ConferenceRoom.h"
#include "../Rooms/LectureRoom.h"
#include <iostream>
#include <utility>

vector<User *> User::users;
vector<int> myRooms;

User::User(string firstName, string lastName, access accessType) : firstName(std::move(firstName)),
                                                                   lastName(std::move(lastName)),
                                                                   accessType(accessType) {
    if (this->accessType == blue) {
        for (Room *room: Room::rooms) {
            auto *lr = dynamic_cast<LectureRoom *>(room);
            auto *cr = dynamic_cast <ConferenceRoom *> (room);
            if (room->floor == 1 && (lr or cr))
                this->myRooms.push_back(room->getNumber());
        }
    } else {
        for (Room *room: Room::rooms) {
            if (room->accessLvl <= this->accessType)
                this->myRooms.push_back(room->getNumber());
        }
    }

}

bool User::TryEnter(int roomNumber) {
    if (Room::state == emergency) return true;
    for (int roomN:this->myRooms) {
        if (roomNumber == roomN)
            return true;
    }
    return false;
}

void User::Print() {
    for (int i = 0; i < users.size(); ++i) {
        cout << i << " " << users.at(i)->firstName + " " << users.at(i)->lastName + " "
             << users.at(i)->accessType + " " << endl;
    }
}
