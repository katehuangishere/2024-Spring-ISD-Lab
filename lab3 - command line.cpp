// lab3 - command line.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

using namespace std;

// argc stores the number of command-line arguments passed to the program
// argv stores an array of strings containing those arguments
int main(int argc, char* argv[]) {

    const double cm2inch = 2.54;
    int val;

    if (argc == 2) // only one parameter
    {
        if (!strcmp("help", argv[1]))
        {
            cout << "Usage: convert unit unitvalue\ni for inch to cm converting\nc for cm to inch converting\nunitvalue in digits\n" << endl;
        }
        else
        {
            cout << "Invalid argument!\n" << endl;
        }
    }
    else if (argc == 3)  // two parameter
    {
        //convert strings to integers
        val = atoi(argv[2]);

        if (!strcmp("i", argv[1]))    // 'i' for inch
            cout << val << "in == " << val * cm2inch << "cm\n";
        else if (!strcmp("c", argv[1]))  // 'c' for cm
            cout << val << "cm == " << val / cm2inch << "in\n";
        else
            cout << "Invalid argument!\n";
    }
    else
    {
        cout << "please type in unit and its value!\nType in 'help' for main page" << endl;
    }

    return 0;

}