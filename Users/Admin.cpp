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
            u->myRooms.push_back(room);
    }

}

void Admin::GiveAccess(User *u, Room *r) {
    for (Room *room:myRooms) if (r == room) return;
    u->myRooms.push_back(r);
}


