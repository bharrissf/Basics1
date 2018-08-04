//============================================================================
// Name        : break-continue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*for(int i=0; i<5; i++) {

	 cout << "i is: " << i << endl;

	 if(i == 3) {
	 break; stops entire loop
	 }

	 cout << "Looping..." << endl;


	 }

	 cout << "Program quitting..." << endl;*/

	/*for (int i = 0; i < 5; i++) {

	 cout << "i is: " << i << endl;

	 if (i == 3) {
	 continue;//continues loop without statements below
	 }

	 cout << "Looping..." << endl;

	 }

	 cout << "Program quitting..." << endl;*/

	const string password = "hello"; //constant makes a variable unchangable

	string input;

	do { //do makes the code execute at least once
		cout << "Enter your password > " << flush;
		cin >> input;

		if (input != password) {
			cout << "Access denied." << endl;
		}
		if (input == password) {
			break;
		}
	} while (true); // everytime this is true the loop will repeat

	cout << "Password accepted" << endl;
	cout << "Program quitting..." << endl;

	return 0;
}
