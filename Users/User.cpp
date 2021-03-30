//
// Created by Eugene on 3/5/2021.
//
#include "../access.h"
#include "User.h"
#include "../Rooms/Room.h"
#include "../Rooms/ConferenceRoom.h"
#include "../Rooms/LectureRoom.h"
#include <iostream>

vector<User *> User::users;
vector<Room *> myRooms;

User::User(string firstName, string lastName, access accessType) : firstName(std::move(firstName)),
                                                                   lastName(std::move(lastName)),
                                                                   accessType(accessType) {
    if (this->accessType == blue) {
        for (Room *room: Room::rooms) {
            auto *lr = dynamic_cast<LectureRoom *>(room);
            auto *cr = dynamic_cast <ConferenceRoom *> (room);
            if (room->floor == 1 && (lr or cr))
                this->myRooms.push_back(room);
        }
    } else {
        for (Room *room: Room::rooms) {
            if (room->accessLvl <= this->accessType)
                this->myRooms.push_back(room);
        }
    }

}


bool User::TryEnter(Room *room) {

    if (Room::state == emergency) return true;
    for (Room *roomWithAccess:this->myRooms) {
        if (room == roomWithAccess)
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

void User::voiceOverAccess(Room *room) {
    cout << this->firstName + " " + this->lastName +
            (this->TryEnter(room) ? " Enters room" : " Cannot enter room")
            + " " + to_string(room->getNumber()) + "\n";
}
