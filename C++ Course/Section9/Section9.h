#ifndef PERSONAL_SECTION9_H
#define PERSONAL_SECTION9_H

#include <string>
using namespace std;

class Dog {
    string name;
    int age;
    string* owner;

public:
//    Using constructor initialization list
    Dog() : name{"None"}, age{0} {
        owner = new string;
        *owner = "None";
    }

//    Constructor
    Dog(string name = "None", int age = 0) {
        this->name = name;
        this->age = age;

        owner = new string;
        *owner = "None";
    }

//    Copy constructor
    Dog(Dog &source) {
        this->name = source.name;
        this->age = source.age;

        this->owner = new string;
//        Shallow copy, commented out by default
//        this->owner = source.owner;

//        Deep copy
        *this->owner = *source.owner;

    }

//    Move constructor
    Dog(Dog &&source) {
        this->name = source.name;
        this->age = source.age;

        this->owner = source.owner;
        source.owner = nullptr;
    }

    string get_name() {return name; }
    void set_name(string name) { this->name = name; }

    int get_age() { return age; }
    void set_age(int age) { this->age = age; }

    int get_human_years() {
        return age * 7;
    }
    string speak() { return "Woof"; }

};

static int sec9ex1();
static int* sec9challenge();

#endif
