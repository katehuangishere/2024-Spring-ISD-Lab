// lab11 - studentacc.h.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <limits>
#include "studentacc.h"

using namespace std;

int main() {
    string studentName, studentID, filename;
    double accountBalance, withdrawPercent, withdrawAmount;
    char key;

    do {
        // allow user to input
        cout << "Student name: ";
        getline(cin, studentName);

        cout << "Student ID: ";
        getline(cin, studentID);

        cout << "Account Start Balance: ";
        cin >> accountBalance;

        cout << "Percentage you want to deduct, ex. 0.20 is 20%: ";
        cin >> withdrawPercent;

        withdrawAmount = accountBalance * withdrawPercent;
        accountBalance -= withdrawAmount;

        cout << fixed << setprecision(2);
        cout << withdrawPercent << "% of withdraw amount is: " << withdrawAmount << endl;
        cout << "Account Balance: " << accountBalance << endl;

        // create a file and save all the info in that file
        cout << "Enter the name of the file that you want to save to: ";
        cin >> filename;
        ofstream outFile(filename);

        if (outFile.is_open()) {
            outFile << fixed << setprecision(2);
            outFile << "Student name: " << studentName << endl;
            outFile << "Student ID: " << studentID << endl;
            outFile << "Account Start Balance: " << accountBalance + withdrawAmount << endl;
            outFile << withdrawPercent << "% of withdraw amount is: " << withdrawAmount << endl;
            outFile << "Account Balance: " << accountBalance << endl;
            outFile.close();
            cout << "File: " << filename << " saved" << endl;
        }
        else {
            cout << "Could not open file to save the data." << endl;
        }

        cout << "Do you want to enter another record? Press any key to continue or 'q' to exit: ";
        cin >> key;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (key != 'q');


    return 0;
}

