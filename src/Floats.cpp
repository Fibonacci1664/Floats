/*
 * Floats.cpp
 *
 *  Created on: 26 May 2019
 *      Author: Dave
 */


#include<iostream>
#include<iomanip>	// Input/Output manipulation.

using namespace std;

int main()
{
	float fValue = 23.32f;

	cout << "A float is " << sizeof(float) << " bytes." << endl;


	//Try these commands
	// fixed
	// scientific
	cout << fixed <<"Float value to 8 sig figs is: " << fValue << endl;

	// cout by default prints floats out to 8 sig figs but can be altered
	cout << setprecision(20) << fixed <<"New float value to 20 sig figs is: " << fValue << endl;

	// The setprecision above is affecting all number after it for some reason?
	// instead of just the print line it is used in.

	double dValue = 23.32;

	cout << "A double is " << sizeof(double) << " bytes." << endl;

	// cout by default prints doubles out to 8 sig figs but can be altered
	cout << fixed <<"Double value is: " << dValue << endl;

	long double lValue = 123.45678987654321;

	cout << "A long double is " << sizeof(long double) << " bytes." << endl;

	cout << fixed <<"Long double value is: " << lValue << endl;





	return 0;
}

