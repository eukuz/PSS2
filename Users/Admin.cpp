//
// Created by Eugene on 3/5/2021.
//

#include "Admin.h"
#include "../Rooms/Room.h"


Admin::Admin(const string &firstName, const string &lastName, bool lovesLinux) : User(firstName,
                                                                                      lastName,
                                                                                      red),
                                                                                 lovesLinux(
                                                                                         lovesLinux) {}

void Admin::SetAccess(User *u, access accessType) {
    u->accessType = accessType;
    u->myRooms.clear();
    for (Room *room: Room::rooms) {
        if (u->accessType >= room->accessLvl)
            u->myRooms.push_back(room->getNumber());
    }
}

void Admin::GiveAccess(User *u, int r) {
    u->myRooms.push_back(r);
}


