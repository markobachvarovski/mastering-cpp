#include <iostream>
#include "Assignment1.h"
#include <string>
#include<bits/stdc++.h>
using namespace std;

static int makePyramid(string str){

    int len = str.length();
//    On the first run of the pyramid, we need len - 1 leading spaces

    int leading_spaces = len - 1;
    string spaces = "";

    for(int i = 0; i < leading_spaces; i++) {
        spaces.append(" ");
    }

//    Now we need to print the leading spaces,
//    then print the amount of letters needed,
//    then print the leading spaces again

    int curr_letter_index = 0;
    string first_half, second_half;

    while(curr_letter_index < len) {

        first_half = str.substr(0, curr_letter_index + 1);
        second_half = str.substr(0, curr_letter_index);

        reverse(second_half.begin(), second_half.end());

        cout << spaces.substr(curr_letter_index)
             << first_half << second_half
             << spaces.substr(curr_letter_index) << endl;

        curr_letter_index++;
    }



    return 0;
}
