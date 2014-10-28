#include "lab1.h"
#include "..\Console.h"
using namespace std;
using namespace System;

int Q2()
{
	int num = 0;
	cout << "Please enter a number:   \b\b\b\n";
	Console::ForegroundColor(FOREGROUND_GREEN);
	cin >> num;
	Console::ResetColor();
	cout << num << " \u00F7 1 = " << num / 1 << endl;
	cout << num << " \u00F7 2 = " << num / 2 << endl;
	cout << num << " \u00F7 4 = " << num / 4 << endl;
	cout << num << " \u00F7 8 = " << num / 8 << endl;
	return EXIT_SUCCESS;
}