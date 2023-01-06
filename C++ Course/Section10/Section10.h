#ifndef PERSONAL_SECTION10_H
#define PERSONAL_SECTION10_H

#include <string>
using namespace std;

class Money {
    int dollars;
    int cents;
public:
    Money(int dollars, int cents)
        : dollars{dollars}, cents{cents} {}

    Money(int total)
        : dollars {total/100}, cents{total%100}  {}

//    Exercise 1 - Implement overloaded == and != operators
    bool operator==(const Money &rhs) {
        if(this->dollars == rhs.dollars && this->cents == rhs.cents) {
            return true;
        }

        return false;
    }

    bool operator!=(const Money &rhs) {
        return !(*this == rhs);
    }

};

#endif
