//
// Created by Eugene on 3/5/2021.
//

#include "LabEmployee.h"

LabEmployee::LabEmployee(const string &firstName, const string &lastName, access accessType, const string &labName,
                         int yearsOfExperience) : User(firstName, lastName, accessType), LabName(labName),
                                                  yearsOfExperience(yearsOfExperience) {    User::users.push_back(this);
}
