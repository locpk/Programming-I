#include "lab3.h"

int Q3()
{
	using std::cout;
	using std::cin;
	int iNum = -1;
	cout << "What number would you like a factorial of? ";
	while (!(cin >> iNum))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "What number would you like a factorial of? ";
	}
	int iCounter = iNum;
	// set iNum as a result;
	iNum = 1;
	cout.width(5);
	while (iCounter > 0)
	{
		if (iCounter == 1)
			cout << iCounter;
		else
		{
			cout << iCounter << " X ";
			
			iNum *= iCounter;
		}
		--iCounter;
	}
	cout << " = " << iNum;
	return EXIT_SUCCESS;
}