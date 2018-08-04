//============================================================================
// Name        : Input.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Enter your name: " << flush;//when using input try to use flush for visual appearance!

	string input; //when using an input you don't have to define the string/variable

	cin >> input; //c-input, reverse the signs to show that the input is going into the variable

	cout << "You entered: " << input << endl;

	cout << "Enter a number: " << flush;

	int value;

	cin >> value;

	cout << "You entered: " << value << endl;

	return 0;
}
