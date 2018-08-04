//============================================================================
// Name        : Integer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
using namespace std;

int main() {

	int value = 54656;

	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long /*int*/lValue = 3894728927348;
	cout << lValue << endl;

	short /*int*/sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl; //shows size of int
	cout << "Size of long int: " << sizeof(long int) << endl; //size of is an operator! THEREFOR NEEDS ()

	unsigned int uValue = 234325; //Can't be negative
	cout << uValue << endl;

	return 0;
}
