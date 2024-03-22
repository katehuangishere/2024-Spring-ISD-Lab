// lab4 - word elimination.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    vector<string> words;
    cout << "Please enter words. Enter 'RBS' to terminate the program:\n";

    string input;
    while (true) {
        cin >> input;

        // Checks if input failure occurs
        if (cin.fail()) {
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            cout << "Invalid input. Please enter a word.\n";
        }
        // terminate the program
        else if (input == "RBS") {
            break;
        }
        else {
            words.push_back(input);
        }
    }

    // Sorts the words vector alphabetically using the sort function.
    sort(words.begin(), words.end());

    // outputs each word with its index
    cout << "Vector words after sorting:\n";
    for (int i = 0; i < words.size(); ++i) {
        cout << "Words " << i << " has: " << words[i] << endl;
    }

    vector<string> w2;
    // Iterates through the sorted words vector, and if a word is not a duplicate of the previous word, 
    // it is added to the w2 vector.
    if (words.size() > 0) {
        w2.push_back(words[0]);
        for (int i = 1; i < words.size(); ++i) {
            if (words[i - 1] != words[i]) {
                w2.push_back(words[i]);
            }
        }
    }

    cout << "\nContent of the second vector variable:\n";
    for (const string& word : w2) {
        cout << word << endl;
    }

    cout << "\nEliminating duplications:\n";
    vector<string> newWords;
    // sorted words vector and checks for duplicates
    for (const string& word : words) {
        if (find(newWords.begin(), newWords.end(), word) == newWords.end()) {
            newWords.push_back(word);
            cout << "Found new word: " << word << endl;
        }
        else {
            cout << "Found duplication: " << word << endl;
        }
    }

    return 0;
}


