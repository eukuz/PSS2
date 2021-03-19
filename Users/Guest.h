//
// Created by Eugene on 3/19/2021.
//

#ifndef HW2_GUEST_H
#define HW2_GUEST_H


#include "User.h"

class Guest : public User {
public:
    int age;

    Guest(const string &firstName, const string &lastName, int age);
};


#endif //HW2_GUEST_H
