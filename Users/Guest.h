#ifndef _GUEST_H
#define _GUEST_H


#include "User.h"
#include <string>

using namespace std;

class Guest : public User {
public:
    int age;

    Guest(const string &firstName, const string &lastName, int age);

};

#endif
