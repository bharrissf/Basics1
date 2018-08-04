//============================================================================
// Name        : Floating.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>//input output manipulation, imports file with fixed and scientific which lets you choose between scientific notation and fixed
using namespace std;

int main() {

	float fValue = 76.4;//float can have a decimal point

	cout << "Size of float: " << sizeof(fValue) << endl;
	cout << setprecision(20) << fixed << fValue << endl;//c-out can output numbers in two different ways, scientific notation and fixed
	//setprecision changes the amount of how many significant outputs you can have

	double dValue = 76.4;//Doubles have around 15 significant outputs that are accurate
	cout << setprecision(20) << fixed << dValue << endl;
	cout << dValue << endl;

	long double lValue = 123.456789012345;//Huge amount of significant outputs, however has a high amount of storage
	cout << setprecision(20) << fixed << lValue << endl;
	cout << "Size of long double: " << sizeof(lValue) << endl;

	return 0;

}
