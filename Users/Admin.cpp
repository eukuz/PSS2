//
// Created by Eugene on 3/5/2021.
//

#include "Admin.h"

Admin::Admin(const string &firstName, const string &lastName, access accessType, bool lovesLinux) : User(firstName,
                                                                                                         lastName,
                                                                                                         accessType),
                                                                                                    lovesLinux(
                                                                                                            lovesLinux) {}

void Admin::SetAcces(User &u, access accessType) {
u.accessType =accessType;
}

