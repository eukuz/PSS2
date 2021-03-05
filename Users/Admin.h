//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_ADMIN_H
#define HW2_ADMIN_H


#include "User.h"

class Admin: public User {
public:
    bool lovesLinux;
    void SetAcces(User &u, access accessType);
    Admin(const string &firstName, const string &lastName, access accessType, bool lovesLinux);
};


#endif //HW2_ADMIN_H
