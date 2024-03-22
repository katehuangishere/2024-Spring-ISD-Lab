// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// draw the triangle with the stars right justified
void starLeftTriangle(int n);
void starRightTriangle(int n);

int main() {
	int star;
	char pick;

	// set up infinity loop
	while (true)  
	{
		cout << "You want to draw (L)eft triangle or (R)ight triangle or (Quit)uit:\n";
		cin >> pick;

		switch (pick)
		{
		case 'L':
		case 'l':
			cout << "Input the number of stars you want to draw: \n";
			cin >> star;
			starLeftTriangle(star);
			break;

		case 'R':
		case 'r':
			cout << "Input the number of stars you want to draw: \n";
			cin >> star;
			starRightTriangle(star);
			break;

		case 'Q':
		case 'q':
			cout << "Quitted!";
			return 0;
			break;

		default:
			cout << "Wrong choice, try again!\n";
			break;
		}
	}
	return 0;
}

void starLeftTriangle(int n) {

	// controls number of lines
	for (int i = 1; i <= n; i++) {

		// controls printing of stars in each line
		for (int j = 1; j <= i; j++)
			cout << '*';

		cout << endl;
	}
}

void starRightTriangle(int n) {

	// controls number of lines
	for (int i = 1; i <= n; i++) {

		// controls printing of spaces
		// The number of spaces decreases as the row number increases
		for (int k = 1; k <= n - i; k++)
			cout << ' ';

		// controls printing of stars in each line
		for (int j = 1; j <= i; j++)
			cout << '*';

		cout << endl;
	}
}
