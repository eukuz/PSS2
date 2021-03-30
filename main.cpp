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
#include "Users/Guest.h"
#include "Rooms/DirectorCabinet.h"
#include "Rooms/Cabinet.h"
#include "Rooms/ClassRoom.h"
#include "Rooms/ConferenceRoom.h"


void
generateUsers() { // auxiliary function for generating a list of users due to the task requirements


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
//        cout<<fName<<" "<<lName<<" CREATED!! \n";
        if (i < 1) {
            new Director(fName, lName, firstNames[rand() % firstNames.size()]);
        } else if (i < 3) {
            new Admin(fName, lName, rand() % 2);
        } else if (i < 7) {
            new Professor(fName, lName, rand(), Subjects[rand() % Subjects.size()]);
        } else if (i < 15) {
            new LabEmployee(fName, lName, Subjects[rand() % Subjects.size()], rand() % 42);
        } else {
            new Student(fName, lName, rand() % 4, rand() % 5, rand() % 30000);
        }
    }

}

int main() {
    //Let's make some users
//    vector<User> users;
    generateUsers();

//    User::Print();


    Director *dir = (Director *) (User::users.at(0));
    Admin *admin = (Admin *) (User::users.at(1));
    Professor *prof = (Professor *) (User::users.at(6));
    Student *student = (Student *) User::users.at(21);
    //Let's make some rooms

    DirectorCabinet *directorCabinet = new DirectorCabinet(1, 4, red, dir);
    Cabinet *cabinet = new Cabinet(3, 4, yellow, prof);
    LectureRoom *lectureRoom = new LectureRoom(100, 1, green, true);
    ClassRoom *classRoom = new ClassRoom(42, 3, green, true);
    ConferenceRoom *conferenceRoom = new ConferenceRoom(13, 2, red, 7);
    ConferenceRoom *conferenceRoom1f = new ConferenceRoom(13, 1, green, 7);

    student->voiceOverAccess(lectureRoom); //green-access person can enter green-access room
    student->voiceOverAccess(cabinet); //green-access person cannot enter yellow-access room
    student->voiceOverAccess(directorCabinet); //green-access person cannot enter red-access room

    admin->GiveAccess(student, cabinet);//admin can give access for any user to any room
    student->voiceOverAccess(cabinet); //now green-access+ person can enter yellow-access room

    admin->SetAccess(student, red); //admin changes access of the student
    student->voiceOverAccess(directorCabinet); //now they can enter red-access room

    prof->voiceOverAccess(cabinet);//a professor with yellow access can enter yellow-accesed room
    admin->SetAccess(prof, no_level); //admin changes access of the prof.
    /*
     * the prof cannot enter the cabinet although they assigned to it profs are not owners of the university property
     * */
    prof->voiceOverAccess(cabinet); //

    dir->voiceOverAccess(lectureRoom); // //red-access person have access to any room
    dir->voiceOverAccess(classRoom);
    dir->voiceOverAccess(cabinet);
    dir->voiceOverAccess(conferenceRoom);

    Guest *guest = new Guest("Just", "Guest", 42); // a guest w/ blue-access lvl
    guest->voiceOverAccess(lectureRoom);
    guest->voiceOverAccess(conferenceRoom1f);
    // blue-access person have access only for conference and lecture rooms of 1st floor
    guest->voiceOverAccess(classRoom);
    guest->voiceOverAccess(cabinet);
    guest->voiceOverAccess(conferenceRoom);
    guest->voiceOverAccess(directorCabinet);

    Room::state = emergency; //In case of an emergency, all rooms are opened - available for everybody.
    guest->voiceOverAccess(directorCabinet);
    dir->voiceOverAccess(directorCabinet);
    prof->voiceOverAccess(directorCabinet);
    student->voiceOverAccess(directorCabinet);

    classRoom->Print(); //that's how rooms are outputted
    cabinet->Print();
    conferenceRoom->Print();
    directorCabinet->Print();


}

