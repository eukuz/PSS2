//
// Created by Eugene on 3/5/2021.
//
#include "../access.h"
#include "User.h"


User::User(const string &firstName, const string &lastName, access accessType) : firstName(firstName),
                                                                                 lastName(lastName),
                                                                                 accessType(accessType) {}

bool User::TryEnter(Room room) {
    return this->accessType >= room.accessLvl;
}
