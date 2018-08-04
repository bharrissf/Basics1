//============================================================================
// Name        : Complex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value1 = 7;
	int value2 = 4;

	if (value1 >= 5) {
		cout << "Condition 1: true" << endl;
	} else {
		cout << "Condition 1: false" << endl;
	}

	if (value1 == 7 && value2 < 3) { // && means and
		cout << "Condition 2: true" << endl;
	} else {
		cout << "Condition 2: false" << endl;
	}

	if (value1 == 7 || value2 < 3) { // || means or
		cout << "Condition 3: true" << endl;
	} else {
		cout << "Condition 3: false" << endl;
	}

	if ((value2 != 8 && value1 == 10) || value1 < 10) { //You could also swap the two codes around and check for equals, try to avoid using not equals unless necessary
		cout << "Condition 4: true" << endl;
	} else {
		cout << "Condition 4: false" << endl;
	}

	bool condition1 = (value2 != 8) && (value1 == 10);
		cout << condition1 << endl;

	bool condition2 = value1 < 10;
	//cout << condition2 << endl;

	if(condition1 || condition2) {
		cout << "condition 5 : true" << endl;
	} else {
		cout << "condition 5: false" << endl;
	}
	if (condition1 && condition2) {
		cout << "condition 6: true" << endl;
	} else {
		cout << "condition 6: false" << endl;
	}

	return 0;
}
