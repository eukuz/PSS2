//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_STUDENT_H
#define HW2_STUDENT_H


#include "User.h"

class Student: User {

public:
    int yearOfEducation;
    int group;
    double scholarship;

    Student(const string &firstName, const string &lastName, access accessType, int yearOfEducation, int group,
            double scholarship);


};


#endif //HW2_STUDENT_H
