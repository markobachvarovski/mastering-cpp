#include <iostream>
#include <string>
#include "Section9.h"
using namespace std;

static int sec9ex1() {

    Dog spot("Spot", 20);
    cout << spot.get_name() << " " << spot.get_age() << endl;

    Dog twin = spot;
    cout << twin.get_name() << " " << twin.get_age() << endl;

    return 0;
}
