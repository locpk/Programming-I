#include "lab3.h"
#include <ctime>
#include <cstdlib>

int valid()
{
	using std::cin; 
	using std::cout;
	int n;
	while (!(cin >> n))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << " Invalid input! again! ";
	}
	return n;
}

int Q4()
{
	using std::cout;
	using std::cin;

	srand(static_cast<unsigned int> (time(nullptr)));
	int iChoice{ -1 };
	int iRnum = rand() % 100 + 1;
	cout << "Guess my number (1-100): ";
	while (iChoice != iRnum || iChoice != 0)
	{
		iChoice = valid();
		if (iChoice > iRnum)
		{
			cout << "too high! Again: ";
			iChoice = valid();
		}
		else if (iChoice < iRnum)
		{
			cout << "too low! Again: ";
			iChoice = valid();
		}
		else
		{
			cout << "you got it! Again: ";
		iChoice = valid();
		}
	}
	return EXIT_SUCCESS;
}