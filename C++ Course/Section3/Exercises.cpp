#include <iostream>
#include <vector>
#include "Section3.h"
using namespace std;

//Exercise 1
static int sec3ex1() {
    int arr[10] {0};
    arr[0] = 100;
    arr[9] = 1000;

    //Print all the numbers in the array
    for(int i = 0; i < 10; i++) {
        cout<<arr[i]<<' ';
    }

    // Note: C++ will not throw an error if trying to access elements
    // with indices over 10, it will provide whatever is stored in memory at
    // that address, which doesn't necessarily belong to the array
    return 0;
}

//Exercise 2
static int sec3ex2() {
    vector <int> vec {10, 20, 30, 40, 50};
    vec[0] = 100;
    vec[4] = 1000;

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }

    return 0;
}

static int sec3challenge () {
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    vector <vector <int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << vector_2d[0][0] << endl;

    vector1[0] = 1000;

    cout << vector1[0] << endl;

    return 0;
}



