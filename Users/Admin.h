#ifndef _ADMIN_H
#define _ADMIN_H


#include "User.h"
#include <string>

using namespace std;

class Room;

class Admin : public User {
public:
    bool lovesLinux;

    void GiveAccess(User *u, Room *r);

    //give any user access to any room
    void SetAccess(User *u, access accessType);

    //set an access-level to a user, this will reset all additionally given accesses
    Admin(const string &firstName, const string &lastName, bool lovesLinux);

};

#endif
