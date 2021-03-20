#ifndef _USER_H
#define _USER_H

using namespace std;

#include <vector>
#include <string>
#include "../access.h"

class Room;

class User {
public:
    static vector<User *> users;

    string firstName;

    string lastName;

    access accessType;

    vector<Room *> myRooms;

    static void Print();

    User(string firstName, string lastName, access accessType);

    bool TryEnter(Room *room); //

    //if the user's access level allows, return true otherwise false
    void voiceOverAccess(Room *room);

};

#endif
