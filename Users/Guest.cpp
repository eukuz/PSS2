//
// Created by Eugene on 3/19/2021.
//

#include "Guest.h"

Guest::Guest(const string &firstName, const string &lastName, int age) : User(firstName, lastName,
                                                                              blue),
                                                                         age(age) { User::users.push_back(this); }
