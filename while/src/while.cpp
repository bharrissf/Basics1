//============================================================================
// Name        : while.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i = 1;
	int a = 0;
	int b = 0;
	cout << a++ << endl;
	cout << ++b << endl;

	while (i <= 5) {

		cout << "Hello  " << i << endl;

		i++; //i = i+1;
	}

	cout << "Program Quitting" << endl;

	return 0;
}
