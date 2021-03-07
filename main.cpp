using namespace std;

#include <iostream>
#include <vector>
#include "Users/User.h"
#include "Rooms/LectureRoom.h"
#include "Users/Director.h"
#include "Users/Admin.h"
#include "Users/Professor.h"
#include "Users/LabEmployee.h"
#include "Users/Student.h"
#include "Rooms/DirectorCabinet.h"
#include "Rooms/Cabinet.h"
#include "Rooms/ClassRoom.h"
#include "Rooms/ConferenceRoom.h"

void
voiceOverAccess(User user, Room room) { // auxiliary function that outputs the TryEnter feature in the convenient format
    cout << user.firstName + " " + user.lastName + (user.TryEnter(room) ? " Enters room" : " Cannot enter room")
            + " " + to_string(room.getNumber()) + "\n";
}

void
generateUsers(vector<User> &users) { // auxiliary function for generating a list of users due to the task requirements

    vector<string> firstNames = {"Adam", "Alex", "Aaron", "Ben", "Carl", "Dan", "David", "Edward",
                                 "Fred", "Frank", "George", "Hal", "Hank", "Ike", "John", "Jack",
                                 "Joe", "Larry", "Monte", "Matthew", "Mark", "Nathan", "Otto",
                                 "Paul", "Peter", "Roger", "Roger", "Steve", "Thomas", "Tim",
                                 "Ty", "Victor", "Walter"};

    vector<string> lastNames = {"Anderson", "Ashwoon", "Aikin", "Bateman", "Bongard", "Bowers", "Boyd",
                                "Cannon", "Cast", "Deitz", "Dewalt", "Ebner", "Frick", "Hancock", "Haworth",
                                "Hesch", "Hoffman", "Kassing", "Knutson", "Lawless", "Lawicki", "Mccord",
                                "McCormack", "Miller", "Myers", "Nugent", "Ortiz", "Orwig"};
    vector<string> Subjects = {"Maths", "PE", "Programming", "CTF", "AI", "Robotics", "English", "Philosophy"};

    for (int i = 0; i < 31; i++) {
        string fName = firstNames[rand() % firstNames.size()];
        string lName = firstNames[rand() % lastNames.size()];
        if (i < 1) {
            users.push_back(Director(fName, lName, red, firstNames[rand() % firstNames.size()]));
        } else if (i < 3) {
            users.push_back(Admin(fName, lName, red, rand() % 2));
        } else if (i < 7) {
            users.push_back(Professor(fName, lName, yellow, rand(), Subjects[rand() % Subjects.size()]));
        } else if (i < 15) {
            users.push_back(LabEmployee(fName, lName, yellow, Subjects[rand() % Subjects.size()], rand() % 42));
        } else {
            users.push_back(Student(fName, lName, green, rand() % 4, rand() % 5, rand() % 30000));
        }
    }

}

int main() {
    //Let's make some users
    vector<User> users;
    generateUsers(users);
    Director &dir = (Director &) (users.at(0));
    Admin &admin = (Admin &) (users.at(1));
    Professor &prof = (Professor &) (users.at(6));
    Student &student = (Student &) users.at(21);


    //Let's make some rooms
    DirectorCabinet directorCabinet = DirectorCabinet(1, red, dir);
    Cabinet cabinet = Cabinet(3, yellow, prof);
    LectureRoom lectureRoom = LectureRoom(100, green, true);
    ClassRoom classRoom = ClassRoom(42, green, true);
    ConferenceRoom conferenceRoom = ConferenceRoom(13, red, 7);

    voiceOverAccess(student, lectureRoom); //green-access person can enter green-access room
    voiceOverAccess(student, cabinet); //green-access person cannot enter yellow-access room
    voiceOverAccess(student, directorCabinet); //green-access person cannot enter red-access room
    admin.SetAcces(student, red); //admin changes access of the student
    voiceOverAccess(student, directorCabinet); //now they can enter red-access room

    voiceOverAccess(prof, cabinet);//a professor with yellow access can enter yellow-accessed room
    admin.SetAcces(prof, no_level); //admin changes access of the prof.
    /*
     * the prof cannot enter the cabinet although they assigned to it profs are not owners of the university property
     * */
    voiceOverAccess(prof, cabinet); //

    voiceOverAccess(dir, lectureRoom); // //red-access person have access to any room
    voiceOverAccess(dir, classRoom);
    voiceOverAccess(dir, cabinet);
    voiceOverAccess(dir, conferenceRoom);
}

