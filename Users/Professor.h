#ifndef _PROFESSOR_H
#define _PROFESSOR_H


#include "User.h"
#include <string>

using namespace std;

class Professor : public User {
public:
    Professor(const string &firstName, const string &lastName, int favouriteNumber, string subject);

    int favouriteNumber;

    string subject;

};

#endif
