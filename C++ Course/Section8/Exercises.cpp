#include <iostream>
#include <string>
#include "Section8.h"
using namespace std;

static int sec8ex1() {
    int* int_ptr = nullptr;
    int val = 10;
    int_ptr = &val;

    *int_ptr = 50;

    cout << val << endl;
    cout << &val << endl;
    cout << int_ptr << endl;
    cout << &int_ptr << endl;

    int val2 = 25;
    int_ptr = &val2;

    cout << *int_ptr << endl;
    cout << &val2 << endl;
    cout << int_ptr << endl;
    cout << &int_ptr << endl;

    return 0;
}

static int* sec8challenge(int array1[], int array2[], int size1, int size2) {

    int* array3 = new int[size1 * size2];
    int k = 0;

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            array3[k] = array1[i] * array2[j];
            k++;
        }
    }
    return array3;
}
