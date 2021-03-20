# Introduction to Programming 2
## Assignment #2
### Eugene Kuzyakhmetov

#### How to set up?

1. Download the last version of the project
2. Open it in your favorite c++ compiler
3. Compile
4. Run

#### How does it work?

The app consists of the main, generateUsers functions, two enums (access and systemState), and two trees of classes that
are:

1. (LectureRoom, DirectorCabinet, ConferenceRoom, ClassRoom, Cabinet) share same parent class Room
2. (Guest, Student, Professor, LabEmployee, Director, Admin) share same parent class User

please have a look at the UML class diagram (made with Bouml)
![UML](https://github.com/eukuz/PSS2HW2/blob/HW3/ClassDiagram.png "Class Diagram")

All users have some level of access, they are:

0. nolevel - users with this type of access can enter no room
1. blue - users with this type of access can enter Conference rooms & Lecture rooms at the 1st floor
2. green - users with this type of access can enter rooms with green type of access
3. yellow - users with this type of access can enter rooms with green and yellow types of access
4. red - users with this type of access can enter rooms with any type of accesses (green, yellow and red)

#### generateUsers

This function receives a vector of Users and fills it with random testing data
(following requirements provided in th task)

#### main

The function needed only for testing of the system

#### States of the system

At the moment, the system has 2 states:

1. normal - the system is functioning normally
2. emergency - any user has acces to any room

#### Admin

Instances of this class can:

1. Set access to any particular user to any particular room
2. Set a type of access to any user (this will clear all access to specific rooms)
