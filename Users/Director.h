#ifndef _DIRECTOR_H
#define _DIRECTOR_H


#include "User.h"
#include <string>

using namespace std;

class Director : public User {
public:
    string petName;

    Director(const string &firstName, const string &lastName, string petName);

};

#endif
