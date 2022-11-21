#include <iostream>
#include <vector>
#include "Section5.h"
using namespace std;

//Exercise 1
static int sec5ex1(int age) {
    if(age >= 16) {
        cout << "You can drive" << endl;
    } else {
        cout << "You can't drive" << endl;
    }

    return 0;
}

//Exercise 2
static int sec5ex2(int age, bool hasCar) {
    if( age >= 16) {

        if(hasCar) {
            cout << "You can drive" << endl;
        } else {
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
        }
    } else {
        cout << "Sorry, come back in "
        << 16 - age << " years and be sure you own a car when you come back." << endl;
    }

    return 0;
}

static int sec5ex3(int day_code) {

    switch(day_code) {

        case 1:
            cout << "It's Monday" << endl;
            break;
        case 2:
            cout << "It's Tuesday" << endl;
            break;
        case 3:
            cout << "It's Wednesday" << endl;
            break;
        case 4:
            cout << "It's Thursday" << endl;
            break;
        case 5:
            cout << "It's Friday" << endl;
            break;
        case 6:
            cout << "It's Saturday" << endl;
            break;
        case 7:
            cout << "It's Sunday" << endl;
            break;
    }

    return 0;
}

static int sec5ex4() {
    int sum = 0;

    for(int i = 0; i <= 15; i++) {
        if (i % 2 == 1){
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}

static int sec5ex5() {
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int count = 0;

    for (int elem : vec) {
        if (elem % 3 == 0 || elem % 5 == 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

static int sec5ex6(vector<int> &vec) {
    int i = 0;

    while(i < vec.size()) {
        if(vec[i] == -99) {
            cout << i << endl;
            return 0;
        }
        i++;
    }

    return 0;
}

static int sec5ex7(vector<int> vec) {
    int sum = 0;

    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < i; j++) {
            sum += vec[i] * vec[j];
        }
    }

    cout << sum << endl;

    return 0;
}

static int sec5challenge () {
    char option;

    cout << "Enter an option" << endl;
    cout << "Valid options are as follows:" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number " << endl;
    cout << "M - Display mean of numbers" << endl;
    cout << "S - Display smallest number in list" << endl;
    cout << "Q - Quit" << endl;

    cin >> option;
    option = toupper(option);

    vector <int> vec;
    int toBeAdded = 0, min, max;

    while(true) {
        switch (option) {
            case 'P':
                if(vec.size() == 0) {
                    cout << "[] - the list is empty" << endl;
                } else {
                    cout << "[ ";
                    for (int i: vec) {
                        cout << i << " ";
                    }
                    cout << "]" << endl;
                }

                break;

            case 'A':
                cout << "Enter a number to be added" << endl;
                cin >> toBeAdded;
                vec.push_back(toBeAdded);
                cout << toBeAdded << " added" << endl;

                break;

            case 'M':
                if(vec.size() == 0) {
                    cout << "Unable to calculate mean - no data" << endl;
                } else {
                    int sum = 0;

                    for(int i : vec) {
                        sum += i;
                    }

                    cout << sum / vec.size() << endl;
                }
                break;

            case 'S':
                min = vec[0];
                for (int i : vec) {
                    if( i < min) {
                        min = i;
                    }
                }

                cout << min << endl;

                break;

            case 'L':
                max = vec[0];

                for (int i : vec) {
                    if( i > max) {
                        max = i;
                    }
                }

                cout << max << endl;

                break;

            case 'Q':
                cout << "Bye" << endl;
                return 0;

            default:
                cout << "Invalid option, select again" << endl;
                cin >> option;
                option = toupper(option);
                break;
        }

        cout << "Choose another option" << endl;
        cin >> option;
        option = toupper(option);
    }

    return 0;
}



