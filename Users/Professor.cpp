
#include "Professor.h"

Professor::Professor(const string &firstName, const string &lastName, int favouriteNumber, string subject) : User(
        firstName, lastName, yellow), favouriteNumber(favouriteNumber), subject(std::move(subject)) {
    User::users.push_back(this);
}

