//
// Created by Eugene on 3/5/2021.
//

#include "Student.h"


Student::Student(const string &firstName, const string &lastName, access accessType, int yearOfEducation, int group,
                 double scholarship) : User(firstName, lastName, accessType), yearOfEducation(yearOfEducation),
                                       group(group), scholarship(scholarship) {}
