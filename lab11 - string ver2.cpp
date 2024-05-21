// lab11 - string ver2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// function
void displayLastFiveChar(const string& userInput) {
    if (userInput.length() >= 5) {
        cout << "The last five characters: "
            << userInput.substr(userInput.length() - 5) << endl;
    }
    else {
        cout << "Input is less than five characters long." << endl;
    }
}

void displayPositionofRBS(const string& sentence) {
    size_t position = sentence.find("RBS");
    if (position != string::npos) {
        cout << "The word 'RBS' found at position: " << position << endl;
    }
    else {
        cout << "The word 'RBS' was not found in the sentence." << endl;
    }
}

void combineTwoStrings(const string& userInput, const string& finalInput) {
    string combined = userInput + " " + finalInput;
    cout << "Combined string: " << combined << endl;
}

int main() {
    string userInput, sentence, finalInput;

    cout << "Enter a string: ";
    getline(cin, userInput);
    displayLastFiveChar(userInput);

    cout << "Enter a sentence that might contain the word 'RBS': ";
    getline(cin, sentence);
    displayPositionofRBS(sentence);

    cout << "Enter another string to combine with the first: ";
    getline(cin, finalInput);
    combineTwoStrings(userInput, finalInput);

    return 0;
}
