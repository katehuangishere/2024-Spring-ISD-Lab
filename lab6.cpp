// lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverseVector(const vector<int>& v) {
    vector<int> reversed(v.rbegin(), v.rend());
    return reversed;
}

void reverseVectorInPlace(vector<int>& v) {
    size_t n = v.size();
    for (size_t i = 0; i < n / 2; ++i) {
        swap(v[i], v[n - i - 1]);
    }
}

// label and constant reference
void print(const string& label, const vector<int>& v) {
    cout << label << ": ";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    try {
        vector<int> original = { 1, 3, 5, 7, 9 };
        print("Original", original);

        vector<int> reversed = reverseVector(original);
        print("Reversed", reversed);

        reverseVectorInPlace(original);
        reverseVectorInPlace(original);
        print("Reversed In Place", original);
    }
    catch (const exception& e) {
        cerr << "error：" << e.what() << endl;
    }
    return 0;
}



