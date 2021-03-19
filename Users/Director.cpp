//
// Created by Eugene on 3/5/2021.
//

#include "Director.h"

#include <utility>

Director::Director(const string &firstName, const string &lastName, string petName) : User(
        firstName, lastName, red), petName(std::move(petName)) {
    User::users.push_back(this);
}
