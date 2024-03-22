// lab4 - define own function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

// function declaration
int raiseToPower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {

    // function invocation
    int threeExpFour = raiseToPower(3, 4);
    cout << "3^4 is " << threeExpFour << endl;

    int sixExpFive = raiseToPower(6, 5);
    cout << "6^5 is " << sixExpFive << endl;

    int twelveExpTen = raiseToPower(12, 10);
    cout << "12^10 is " << twelveExpTen << endl;

    return 0;
}





