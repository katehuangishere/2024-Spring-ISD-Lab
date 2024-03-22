// lab4 - q8 in hw1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

void lab4(int number) {
    cout << "integer\tsquare\tcube\n";
    cout << number << '\t' << number * number << '\t' << number * number * number << "\n";
}

int main() {
    char choice = 'y';

    while (choice == 'y') {
        int inputNumber;

        cout << "Enter an integer: ";
        cin >> inputNumber;

        lab4(inputNumber);

        cout << "Do you want to enter another integer? (y/n): ";
        cin >> choice;

    }

    return 0;
}



