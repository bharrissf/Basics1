//============================================================================
// Name        : if.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//ifs work with integers as well.
int main() {

	string password = "hello";

	cout << "Enter your password > " << flush;

	string input;
	cin >> input;

	if(password == input) {//one equal sign assigns, two equal signs checks if two values are equal

		cout << "Password accepted." << endl;

	}

	if(input != password) {//!!! != means not equals !!!
		cout << "Access Denied." << endl;
	}

	return 0;
}
