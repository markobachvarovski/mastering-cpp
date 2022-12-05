#include <iostream>
#include <cstring>
#include <string>
#include "Section6.h"
using namespace std;

static int sec6ex1() {

    char first_name[] = "Bjarne";
    char last_name[] = "Stroustrup";
    char whole_name[strlen(first_name) + strlen(last_name)];

    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);
    int whole_name_length = strlen(whole_name);

    strcpy(whole_name, first_name);
    strcat(whole_name, " ");
    strcat(whole_name, last_name);

    cout << "The length of the first name, " << first_name
    << ", is " << first_name_length << " letters long and the length of the last name, "
    << last_name << ", is " << last_name_length <<
    " letters long. This means that the length of the whole name must be " <<
    whole_name_length << " letters long.";

    return 0;
}

static int sec6ex2() {

    string unformatted_full_name {"StephenHawking"};

    string first_name = unformatted_full_name.substr(0, 7),
        last_name = unformatted_full_name.substr(7);

    string formatted_full_name = first_name + last_name;
    string whitespace = " ";

    formatted_full_name.insert(7, whitespace);

    cout << formatted_full_name << endl;

    return 0;
}

static int sec6ex3() {

    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    journal_entry_1.erase(0, 6);

    if(journal_entry_1 > journal_entry_2) {
        journal_entry_1.swap(journal_entry_2);
    }

    cout << journal_entry_1 << endl;
    cout << journal_entry_2 << endl;

    return 0;
}

static int sec6challenge() {

    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";

    string input;
    string encrypted_input;
    int index;

    cout << "Please enter a word" << endl;
    cin >> input;

    cout << "Encrypting string..." << endl;

    for(char i : input) {
        index = alphabet.find(i);

        encrypted_input += key[index];
    }

    cout << "Encrypted string: " << encrypted_input << endl;
    cout << endl;
    cout << "Decrypting string..." << endl;

    string decrypted_string;

    for(char i : encrypted_input) {
        index = key.find(i);

        decrypted_string += alphabet[index];
    }

    cout << "Decrypted string: " << decrypted_string << endl;

    return 0;
}