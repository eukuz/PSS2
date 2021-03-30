#ifndef _LABEMPLOYEE_H
#define _LABEMPLOYEE_H


#include "User.h"
#include <string>

using namespace std;

class LabEmployee : public User {
public:
    string LabName;

    int yearsOfExperience;

    LabEmployee(const string &firstName, const string &lastName, string labName, int yearsOfExperience);

};

#endif
