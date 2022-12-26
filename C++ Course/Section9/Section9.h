#ifndef PERSONAL_SECTION9_H
#define PERSONAL_SECTION9_H

#include <string>
using namespace std;

class Dog {
    string name;
    int age;

public:
//    Using constructor initialization list
    Dog() : name{"None"}, age{0}{
    }

    Dog(string name = "None", int age = 0) {
        this->name = name;
        this->age = age;
    }

    Dog(Dog &source) {
        this->name = source.name;
        this->age = source.age;
    }

    string get_name() {return name; }
    void set_name(string name) { this->name = name; }

    int get_age() { return age; }
    void set_age(int age) { this->age = age; }

    int get_human_years() {
        return age * 7;
    }
    string speak() { return "Woof"; }

    const string &getName() const;
};

static int sec9ex1();
static int* sec9challenge();

#endif
