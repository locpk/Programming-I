#include "Functions.h"
using namespace System;
using std::cout;
using std::cin;
using std::endl;

void PlayerMoves(int* iPlayerRow, int* iPlayerCol)
{


		//Player move
		cout << "Which Row?";
		cin >> *iPlayerRow;
		cout << "Which Col?";
		cin >> *iPlayerCol;
		//input validation 
		while (!ValidatingMoves(iPlayerRow,iPlayerCol))
		{
			cout << "Wrong input!!! Again!\n";
			cin >> *iPlayerRow;
			cin >> *iPlayerCol;
		}

}

bool ValidatingMoves(int* iPlayerRow, int* iPlayerCol)
{
	if (0 != *iPlayerRow && 1 != *iPlayerRow && 2 != *iPlayerRow)
	{
		cin.clear();
		cin.ignore(LLONG_MAX, '\n');
		return false;
	}
	else if (0 != *iPlayerCol && 1 != *iPlayerCol && 2 != *iPlayerCol)
	{
		cin.clear();
		cin.ignore(LLONG_MAX, '\n');
		return false;
	}
	return true;
}

bool Quit()
{
	char cFlag = '0';
	cout << "Wanna Quit? (Y/N)";
	while (!(cin >> cFlag))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Wanna Quit? (Y/N)";
	}
	cFlag = tolower(cFlag);
	if (cFlag == 'y')
		return true;
	else
		return false;
	
}