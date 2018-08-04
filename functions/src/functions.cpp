//============================================================================
// Name        : functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() { //use void to define a function, don't forget parenthesis
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;

}
int processSelection() {//if you want to use the variables in main change void to int
	cout << "Enter selection: " << endl;

	int input;
	cin >> input;

	return input;
}
int main() {

	showMenu();

	int selection = processSelection();//defining input to the return value of the function above!

	switch (selection) {
	case 1:
		cout << "Searching ..." << endl;
		break;
	case 2:
		cout << "Viewing ..." << endl;
		break;
	case 3:
		cout << "Quitting ..." << endl;
		break;
	default:
		cout << "Please select an item from the menu ..." << endl;
		break;
	}

	return 0;
}
