#include <iostream>
#include "./C++ Course/Section1/Section1.h"
#include "./C++ Course/Section1/Exercises.cpp"
#include "./C++ Course/Section2/Section2.h"
#include "./C++ Course/Section2/Exercises.cpp"
#include "./C++ Course/Section3/Section3.h"
#include "./C++ Course/Section3/Exercises.cpp"
#include "./C++ Course/Section4/Section4.h"
#include "./C++ Course/Section4/Exercises.cpp"
#include "./C++ Course/Section5/Section5.h"
#include "./C++ Course/Section5/Exercises.cpp"
#include "./C++ Course/Section6/Section6.h"
#include "./C++ Course/Section6/Exercises.cpp"
#include "./C++ Course/Assignments/Assignment1.h"
#include "./C++ Course/Assignments/Assignment1.cpp"
#include "./C++ Course/Section7/Section7.h"
#include "./C++ Course/Section7/Exercises.cpp"
using namespace std;

int main() {
    string guest1 = "A";
    string guest2 = "B";
    string guest3 = "C";

    sec7ex6print(guest1, guest2, guest3);
    sec7ex6clear(guest1, guest2, guest3);
    sec7ex6print(guest1, guest2, guest3);

    return 0;
}
