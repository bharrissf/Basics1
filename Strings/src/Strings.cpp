//============================================================================
// Name        : Strings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() { //remember order, code reads line by line after this section

	string text1 = "Hello ";
	string text2 = "Fred";

	string text3 = text1 + text2;//don't forget to combine strings for convenience

	cout << text1 << text2 << endl;//Don't forget to combine outputs instead of using two separate ones!!

	cout << text3 << endl;

	return 0;

}

