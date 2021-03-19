//
// Created by Eugene on 3/5/2021.
//

#include <string>
#include "../access.h"
#include <vector>
#include "iostream"
using namespace std;

#ifndef HW2_USER_H
#define HW2_USER_H


class User {
public:
    static vector<User*> users;
    string firstName;
    string lastName;
    access accessType;
    vector<int> myRooms;
    static void print(){
        for (int i = 0; i < users.size(); ++i) {
            cout<<i<<" "<<users.at(i)->lastName<<endl;
        }
    }
    User(const string &firstName, const string &lastName, access accessType);
    bool TryEnter(int roomNumber); //if the user's access level allows, return true otherwise false
};


#endif //HW2_USER_H
