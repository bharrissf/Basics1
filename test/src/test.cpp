//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int value;
	    long lValue;
	    char cValue;
	    float d;
	    double e;
	    cin >> value;
	    cout << fixed << value << endl;
	    cin >> lValue;
	    cout << fixed << lValue << endl;
	    cin >> cValue;
	    cout << fixed << cValue << endl;
	    cin >> d;
	    cout << setprecision(3) << fixed << d << endl;
	    cin >> e;
	    cout << setprecision(9) << fixed << e << endl;
	return 0;
}
