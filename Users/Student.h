#ifndef _STUDENT_H
#define _STUDENT_H


#include "User.h"
#include <string>

using namespace std;

class Student : public User {
public:
    int yearOfEducation;

    int group;

    double scholarship;

    Student(const string &firstName, const string &lastName, int yearOfEducation, int group, double scholarship);

};

#endif
