// lab2 - simple computation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int main()
{
	const double cm2inch = 2.54;
	double length = 1;
	while (length != 0)
	{
		cout << "Please enter a length in inches: ";
		cin >> length;
		cout << length << "in. =" << cm2inch * length << "cm.\n";
	}
	return 0;
}