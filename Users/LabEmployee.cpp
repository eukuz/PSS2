//
// Created by Eugene on 3/5/2021.
//

#include "LabEmployee.h"

#include <utility>

LabEmployee::LabEmployee(const string &firstName, const string &lastName, string labName,
                         int yearsOfExperience) : User(firstName, lastName, yellow), LabName(std::move(labName)),
                                                  yearsOfExperience(yearsOfExperience) {
    User::users.push_back(this);
}
