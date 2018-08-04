//============================================================================
// Name        : *Variables.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//string test = "test"; (string requires "string"; Str can not be used.
	int numberCats = 5; //int - allocate some memory for storing a number
	int numberDogs = 7; //name variables descriptively so they can be remembered easily
	int numberAnimals = numberCats + numberDogs;

	cout << test << endl;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Total number of animals: " << numberAnimals << endl;

	cout << "New dog acquired!" << endl;

	numberDogs = numberDogs + 1;

	cout << "New number of dogs: " << numberDogs << endl;

	return 0;
}
