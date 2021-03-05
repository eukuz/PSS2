cmake_minimum_required(VERSION 3.17)
project(HW2)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW2 main.cpp Users/User.cpp Users/User.h access.h Users/Student.cpp Users/Student.h Users/Professor.cpp Users/Professor.h Users/LabEmployee.cpp Users/LabEmployee.h Users/Director.cpp Users/Director.h Users/Admin.cpp Users/Admin.h Rooms/Room.cpp Rooms/Room.h Rooms/ClassRoom.cpp Rooms/ClassRoom.h Rooms/LectureRoom.cpp Rooms/LectureRoom.h Rooms/ConferenceRoom.cpp Rooms/ConferenceRoom.h Rooms/Cabinet.cpp Rooms/Cabinet.h Rooms/DirectorCabinet.cpp Rooms/DirectorCabinet.h)