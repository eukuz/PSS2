//
// Created by Eugene on 3/5/2021.
//

#include "Professor.h"

Professor::Professor(const string &firstName, const string &lastName, access accessType, int favouriteNumber,
                     const string &subject) : User(firstName, lastName, accessType), favouriteNumber(favouriteNumber),
                                              subject(subject) {    User::users.push_back(this);
}
