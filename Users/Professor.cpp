//
// Created by Eugene on 3/5/2021.
//

#include "Professor.h"

#include <utility>

Professor::Professor(const string &firstName, const string &lastName, int favouriteNumber,
                     string subject) : User(firstName, lastName, yellow), favouriteNumber(favouriteNumber),
                                       subject(std::move(subject)) {
    User::users.push_back(this);
}
