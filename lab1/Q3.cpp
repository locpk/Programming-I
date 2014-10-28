#include "lab1.h"
#include "..\Console.h"
using namespace std;
using namespace System;

int Q3()
{
	short a = 0, b = 0, c = 0;
	cout << "Enter the value for a: ";
	Console::ForegroundColor(FOREGROUND_GREEN);
	cin >> a;
	Console::ResetColor();
	cout << "Enter the value for b: ";
	Console::ForegroundColor(FOREGROUND_GREEN);
	cin >> b;
	Console::ResetColor();
	cout << "Enter the value for c: ";
	Console::ForegroundColor(FOREGROUND_GREEN);
	cin >> c;
	Console::ResetColor();
	cout << "(a + 1) \u00D7 (b + 2) - c = " << (a + 1)* (b + 2) - c << endl;
	return EXIT_SUCCESS;
}