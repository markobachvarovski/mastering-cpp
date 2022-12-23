#include <iostream>
#include <cmath>
#include <string>
#include "Section7.h"
using namespace std;

static int sec7ex1(float bill_total, int num_guests) {

    double bill = bill_total / num_guests;

//    Bill 1 rounds down to the nearest dollar
    int bill1 = floor(bill);

//    Bill 2 rounds to the nearest dollar
    double bill2 = round(bill);

//    Bill 3 rounds to nearest cent
    double bill3 = ceil(bill * 100) / 100;

    cout << bill << endl;
    cout << bill1 << endl;
    cout << bill2 << endl;
    cout << bill3 << endl;

    return 0;
}

static int sec7ex2(int temp) {

    cout << "Temperature in Celsius: " << round((5.0/9.0)*(temp - 32)) << endl;

    temp = round((5.0/9.0)*(temp - 32));

    cout << "Temperature in Kelvin: " << temp + 273 << endl;

    return 0;
}

static void sec7ex3(int num) {
//    Print value of num, if none provided, defaults to 3, specified in  .h file
    cout << num;
}

//Overloaded function for int
static void sec7ex4(int val) {
    cout << val << endl;
}

//Overloaded function for double
static void sec7ex4(double val) {
    cout << val << endl;
}

//Overloaded function for int
static void sec7ex4(bool val) {
    cout << val << endl;
}

//Printing and modifying arrays
static int sec7ex5print(string guests [], size_t size) {
    for(int i = 0; i < size; i++) {
        cout << guests[i] << endl;
    }

    return 0;
}

static int sec7ex5clear(string guests[], size_t size) {
    for(int i = 0; i < size; i++) {
        guests[i] = "";
    }

    return 0;
}

//Pass by reference, printing and modifying
static int sec7ex6print(const string &guest1, const string &guest2, const string &guest3) {
    cout << guest1 << endl;
    cout << guest2 << endl;
    cout << guest3 << endl;

    return 0;
}

static int sec7ex6clear(string &guest1, string &guest2, string &guest3){

    guest1 = "_";
    guest2 = "_";
    guest3 = "_";

    return 0;
}

//Recursively doubles a penny for n days
static float sec7ex7(int day) {
    if(day == 1) {
        return 0.01;
    }

    return 2*sec7ex7(day-1);
}