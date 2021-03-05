//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_DIRECTOR_H
#define HW2_DIRECTOR_H


#include "User.h"

class Director: User {

public:
    string petName;

    Director(const string &firstName, const string &lastName, access accessType, const string &petName);
};


#endif //HW2_DIRECTOR_H
