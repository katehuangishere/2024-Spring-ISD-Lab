// lab11 - string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput, sentence, finalInput;

    // Part 1: Get user input and display the last five characters
    cout << "Enter a string: ";
    getline(cin, userInput);
    if (userInput.length() >= 5) {
        cout << "The last five characters of the input: "
            << userInput.substr(userInput.length() - 5) << endl;
    }
    else {
        cout << "The input is less than five characters long: "
            << userInput << endl;
    }

    // Part 2: Get another string input and find the word "RBS"
    cout << "Enter a sentence that might contain the word 'RBS': ";
    getline(cin, sentence);
    size_t found = sentence.find("RBS");
    if (found != string::npos) {
        cout << "The word 'RBS' is found at position: " << found << endl;
    }
    else {
        cout << "The word 'RBS' was not found in the sentence." << endl;
    }

    // Part 3: Get the third input, combine with the first input, and display
    cout << "Enter another string: ";
    getline(cin, finalInput);
    string combined = userInput + " " + finalInput;
    cout << "The combined string is: " << combined << endl;

    return 0;
}

