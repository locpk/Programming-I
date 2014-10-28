#include "lab1.h"
#include "..\Console.h"
using namespace std;
using namespace System;

int Q9()
{
	char ch = 'a';
	cout << "What is your favorite letter? ";
	cin >> ch;
	cout << "The letter " << ch << " is between " << char(ch - 1) << " and " << char(ch + 1) << ".\n";
	return EXIT_SUCCESS;
}