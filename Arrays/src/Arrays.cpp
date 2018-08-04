//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//an array is a list of values contained in one variable
	cout << "Array of integers" << endl;
	cout << "=================" << endl;
	int values[3]; //an array with three items, each element acts as a regular variable

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << "Array of doubles" << endl;
	cout << "=================" << endl;

	double numbers[4] = { 4.5, 2.3, 7.2, 8.1 };

	for (int i = 0; i < 4; i++) {
		cout << "Elements at index " << i << ": " << numbers[i] << endl;

	}
	cout << "Initializing with zero values" << endl;
	cout << "=================" << endl;

	int numberArray[8] = {};

	for(int i=0; i<8; i++) {
		cout << "Elements of index " << i << ": " << numberArray[i] << endl;

	}

	string texts[] = {"apple", "banana", "orange"};//if you initialize it when you declare the array you don't have to give a size to the array

	for(int i=0; i<3; i++){
		cout << "Elements of index " << i << ": " << texts[i] << endl;
	}


	return 0;
}
