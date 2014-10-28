#include "lab1.h"
#include "..\Console.h"
using namespace std;
using namespace System;

int Q6()
{
	int iNum = 0;
	cout << "Number of Bytes in a:" << endl
		<< "\tbool\t" << sizeof(bool) << " bytes" << endl
		<< "\tchar\t" << sizeof(char) << " bytes" << endl
		<< "\tunsigned char\t" << sizeof(unsigned char) << " bytes" << endl
		<< "\tshort\t" << sizeof(short) << " bytes" << endl
		<< "\tlong\t" << sizeof(long) << " bytes" << endl
		<< "\tlong long\t" << sizeof(long long) << " bytes" << endl
		<< "\tfloat\t" << sizeof(float) << " bytes" << endl
		<< "\tdouble\t" << sizeof(double) << " bytes" << endl
		<< "\tlong double\t" << sizeof(long double) << " bytes" << endl;
	cout << "How many integers would you like to use?";
	cin >> iNum;
	cout << "That would require " << sizeof(int)*iNum << " bytes." << endl;
	return EXIT_SUCCESS;
}