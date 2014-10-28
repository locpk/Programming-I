#include "lab1.h"
#include "..\Console.h"
using namespace std;
using namespace System;

int Q4()
{
	long int liCelsius = 0;
	float fCelsius = 0;
	cout << "Please enter Celsius temperature: ";
	cin >> liCelsius;
	cout << liCelsius << " degrees Celsius is " << (liCelsius * 9) / 5 + 32 << " degrees Fahrenheit." << endl;
	
	cout << "Please enter Celsius temperature: ";
	cin >> fCelsius;
	cout << fCelsius << " degrees Celsius is " << (fCelsius * 9) / 5 + 32 << " degrees Fahrenheit." << endl;
	return EXIT_SUCCESS;
}