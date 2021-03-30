
#include "Director.h"

Director::Director(const string &firstName, const string &lastName, string petName) : User(
        firstName, lastName, red), petName(std::move(petName)) {

    User::users.push_back(this);
}

