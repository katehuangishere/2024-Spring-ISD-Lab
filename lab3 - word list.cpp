// lab3 - word list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int main()
{
	vector<string> words;
	string temp;
	while (cin >> temp)
		words.push_back(temp);

	cout << "Number of words: " << words.size() << endl;

	sort(words.begin(), words.end());

	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i])
			cout << words[i] << "\n";
}