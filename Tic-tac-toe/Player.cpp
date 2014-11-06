#include "Functions.h"
using namespace System;
using std::cout;
using std::cin;
using std::endl;

void PlayerMoves(int* iPlayerRow, int* iPlayerCol, size_t* iOffsetx, size_t* iOffsety)
{

		Console::SetCursorPosition(*iOffsetx, ++*iOffsety);
		//Player move
		cout << "Which Row? (0 >> 2)";
		cin >> *iPlayerRow;
		//row input validation 
		while (ValidatingMoves(iPlayerRow))
		{
			cin.clear();
			cin.ignore(LLONG_MAX, '\n');
			Console::SetCursorPosition(*iOffsetx, ++*iOffsety);
			cout << "Wrong input!!! Again!\n";
			Console::SetCursorPosition(*iOffsetx, ++*iOffsety);
			cout << "Which Row? (0 >> 2)";
			cin >> *iPlayerRow;
		}
		Console::SetCursorPosition(*iOffsetx, ++*iOffsety);
		cout << "Which Col? (0 >> 2)";
		cin >> *iPlayerCol;
		while (ValidatingMoves(iPlayerCol))
		{
			cin.clear();
			cin.ignore(LLONG_MAX, '\n');
			Console::SetCursorPosition(*iOffsetx, ++*iOffsety);
			cout << "Wrong input!!! Again!\n";
			Console::SetCursorPosition(*iOffsetx, ++*iOffsety);
			cout << "Which Col? (0 >> 2)";
			cin >> *iPlayerCol;
		}

}

bool ValidatingMoves(int* iInput)
{
	return (0 != *iInput && 1 != *iInput && 2 != *iInput);
	
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