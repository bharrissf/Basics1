//============================================================================
// Name        : sizeof.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string animals[2][3] = { { "fox", "dog", "cat" }, { "mouse", "squirrel",
			"parrot" } };

	cout << sizeof(animals[0]) << endl;

	for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
		for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}

	}

	return 0;
}
