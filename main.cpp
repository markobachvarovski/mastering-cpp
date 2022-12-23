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
#include "./C++ Course/Section8/Section8.h"
#include "./C++ Course/Section8/Exercises.cpp"
using namespace std;

int main() {

    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int* array3 = sec8challenge(array1, array2, 3, 3);

    for(int i = 0; i < 3 * 3; i++) {
        cout << array3[i] << endl;
    }

    return 0;
}
