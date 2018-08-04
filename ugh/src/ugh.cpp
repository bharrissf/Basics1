#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	// Complete the code

	const string password = "Password";
	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;

		if(input != password) {
			cout << "Access denied..." << endl;
		}

		if(input == password) {
			break;
		}
	} while (true);

	cout << "Password accepted" << endl;
	cout << "Program quitting..." << endl;

	return 0;
}

