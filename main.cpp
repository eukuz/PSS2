using namespace std;
#include <iostream>
#include "Users/User.h"
#include "Rooms/LectureRoom.h"

int main() {
    User a = User("a","b",green);
    Room r = Room(1,green);
    LectureRoom rr = LectureRoom(1,green, true);
    LectureRoom r3 = LectureRoom(1,yellow, true);
    cout<<r3.getNumber();
    cout<<a.TryEnter(rr);
    cout<<a.TryEnter(r3);

    return 0;
}
