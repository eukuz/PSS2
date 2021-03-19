//
// Created by Eugene on 3/5/2021.
//

#include "Director.h"

Director::Director(const string &firstName, const string &lastName, access accessType, const string &petName) : User(
        firstName, lastName, accessType), petName(petName) {
    User::users.push_back(this);
}
