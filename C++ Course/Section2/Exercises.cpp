#include <iostream>
#include <string>
#include "Section2.h"
using namespace std;

//Exercise 1
static int sec2ex1() {
    int age;
    double hourly_wage = 23.50;
    string name;

    cout << "Enter your name and age" << endl;

    std::cin >> name;
    std::cin >> age;

    std::cout << "You're " << name << ", " << age << " years old and your hourly wage is " << hourly_wage << std::endl;

    return 0;
}



