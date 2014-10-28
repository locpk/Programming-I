#include "lab1.h"
#include "..\Console.h"
using namespace std;
using namespace System;

int Q7()
{
	int iLength = 0, iWidth = 0, iHeight = 0;
	cout << "Enter the dimensions of the hollowed stone box:" << endl;
	cout << "\tLength? ";
	cin >> iLength;
	cout << "\tWidth? ";
	cin >> iWidth;
	cout << "\tHeight? ";
	cin >> iHeight;
	cout << "A " << iLength << " x " << iWidth << " x " << iHeight << " shape will require " << iLength*iWidth*iHeight << " blocks of stone." << endl;
	cout << "A " << iLength - 2 << " x " << iWidth - 2 << " x " << iHeight - 2 << " empty shape inside would remove " << (iLength-2)*(iWidth-2)*(iHeight-2) << " blocks." << endl;
	cout << "The hollowed shape uses " << iLength*iWidth*iHeight - (iLength - 2)*(iWidth - 2)*(iHeight - 2) << " blocks of stone." << endl;
	return EXIT_SUCCESS;
}