# Introduction to Programming 2
## Assignment #2
### Eugene Kuzyakhmetov

#### How to set up?

1. Download the last version of the project
2. Open it in your favorite c++ compiler
3. Compile
4. Run

#### How does it work?

The app consists of the main, generateUsers, voiceOverAccess functions, one enum (access) and two trees of classes that are:
1.(LectureRoom, DirectorCabinet, ConferenceRoom, ClassRoom, Cabinet) share same parent class Room
2.(Student, Professor, LabEmployee, Director, Admin) share same parent class User

please have a look at the UML class diagram (made with https://online.visual-paradigm.com)
![UML](https://github.com/eukuz/PSS2HW2/blob/master/UML.png "UML")

All users have some level of access, they are:
1. nolevel - users with this type of access can enter no room
2. green - users with this type of access can enter rooms with green type of access
3. yellow - users with this type of access can enter rooms with green and yellow types of access
4. red  - users with this type of access can enter rooms with any type of accesses (green, yellow and red) 

#### generateUsers
This function receives a vector of Users and fills it with random testing data 
(following requirements provided in th task)

#### voiceOverAccess
The function receives a User and a Room instances and outputs the try of the user to enter the room to the console

#### main
The function needed only for testing of the system
