//============================================================================
// Name        : if-else.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "1. Add new record" << endl;
	cout << "2. Delete record" << endl;
	cout << "3. View record" << endl;
	cout << "4. Search record" << endl;
	cout << "5. Quit" << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if (value == 1) {
		cout << "Adding new record..." << endl;
	} else if (value == 2) {
		cout << "Deleting record..." << endl;
	} else if (value == 3) {
		cout << "Viewing ..." << endl;
	} else if (value == 2) {
		cout << "Searching for record..." << endl;
	} else if (value == 2) {
		cout << "Quitting..." << endl;
	} else {
		cout << "Invalid option." << endl;
	}
	return 0;
}
