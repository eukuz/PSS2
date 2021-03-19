//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_LABEMPLOYEE_H
#define HW2_LABEMPLOYEE_H


#include "User.h"

class LabEmployee : public User {
public:
    string LabName;
    int yearsOfExperience;

    LabEmployee(const string &firstName, const string &lastName, string labName,
                int yearsOfExperience);
};


#endif //HW2_LABEMPLOYEE_H
