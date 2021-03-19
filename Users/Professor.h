//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_PROFESSOR_H
#define HW2_PROFESSOR_H


#include "User.h"

class Professor : public User {
public:
    Professor(const string &firstName, const string &lastName, int favouriteNumber,
              string subject);

    int favouriteNumber;
    string subject;

};


#endif //HW2_PROFESSOR_H
