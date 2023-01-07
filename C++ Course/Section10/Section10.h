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

    friend Money operator+(const Money &lhs, const Money &rhs);

    friend ostream &operator<<(ostream &out, const Money &amount);
};

//    Exercise 2 - Implement overloaded + operator
Money operator+(const Money &lhs, const Money &rhs) {
    int total = (lhs.dollars + rhs.dollars) * 100 + lhs.cents + rhs.cents;
    return Money(total);
}

//    Exercise 3
ostream &operator<<(ostream &out, const Money &amount) {
    out << "dollars: " << amount.dollars << " cents: " << amount.cents;
    return out;
}

#endif
