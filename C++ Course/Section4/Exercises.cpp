#include <iostream>
#include <vector>
#include "Section4.h"
using namespace std;

//Exercise 1
static int sec4ex1() {
    int num1 = 13, num2 = 0;
    num1 = 5;
    num2 = num1;

    return 0;
}

//Exercise 2
static int sec4ex2(int number) {
    int orig_number = number;

    number = number * 2;
    number = number + 9;
    number = number - 3;
    number = number / 2;
    number = number - orig_number;

    number = number % 3;

    cout << number << endl;

    return 0;
}

static int sec4ex3(int age, bool parental_consent, bool ssn, bool accidents) {
    if (( age >= 18 || ( age > 15 && parental_consent) ) && ssn && !accidents) {
        cout << "You can work.";
    } else {
        cout << "You can't work.";
    }
    return 0;
}

//Convert cents to dollars, quarters, dimes or nickels
static int sec4challenge (int cents) {
    int dollars = cents / 100;
    cents %= 100;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    cout << "Dollars " << dollars << endl;
    cout << "Quarters " << quarters << endl;
    cout << "Dimes " << dimes << endl;
    cout << "Nickels " << nickels << endl;
    cout << "Pennies " << cents << endl;
    return 0;
}



