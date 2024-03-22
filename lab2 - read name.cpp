// lab2 - read name.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int main() {
	cout << "Please enter your first name(followed "<<" by 'enter'):\n";
	
	string first_name;
	cin >> first_name;

	cout << "Hello " << first_name << '\n';

	return 0;
}