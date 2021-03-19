//
// Created by Eugene on 3/5/2021.
//

#include "Student.h"


Student::Student(const string &firstName, const string &lastName, int yearOfEducation, int group,
                 double scholarship) : User(firstName, lastName, green), yearOfEducation(yearOfEducation),
                                       group(group), scholarship(scholarship) {    User::users.push_back(this);
}
