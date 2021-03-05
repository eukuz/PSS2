//
// Created by Eugene on 3/5/2021.
//
#include <string>
#include "../access.h"
#include "../Rooms/Room.h"

using namespace std;
#ifndef HW2_USER_H
#define HW2_USER_H


class User {
public:
    string firstName;
    string lastName;
    access accessType;
    User(const string &firstName, const string &lastName, access accessType);
    bool TryEnter(Room room);
};


#endif //HW2_USER_H
