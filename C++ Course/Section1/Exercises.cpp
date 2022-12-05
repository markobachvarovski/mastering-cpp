#include <iostream>
#include "Section1.h"
using namespace std;

//Exercise 1
static int sec1ex1() {
    std::cout << "Hi Frank" << std::endl;
    return 0;
}

//Exercise 2
static int sec1ex2() {
    int x = 3;
    std::cout << "Sally has " << x << " dogs" << std::endl;
    return 0;
}

//Exercise 3
static int sec1ex3() {
    int day, month, year;

    std::cout << "Please enter your day, month and year of birth" << std::endl;

    std::cin >> day;
    std::cin >> month;
    std::cin >> year;

    std::cout << "Your birthday is " << day << "." << month << "." << year << std::endl;

    return 0;
}

