#include "lab2.h"


int Q3()
{
	using std::cout;
	using std::cin;
	char cAnw1, cAnw2, cAnw3;
	int iScore = 0;
	cout << "True or False Exam - Enter T or F\n\n";
	cout << "Question 1: \'elseif\' is a keyword in C++: ";
	cin >> cAnw1;
	if (cAnw1 == 'F' || cAnw1 == 'f')
	{
		++iScore;
		cout << "CORRECT! Your score is " << iScore << " !\n";
	}
	else if (cAnw1 == 'T' || cAnw1 == 't')
	{
		cout << "Incorrect!\n";
	}
	else
	{
		cout << "ERROR! You did not input T or F!\n";
	}

	cout << "\'rand()%26+25\' will produce a number within 25 -> 26: ";
	cin >> cAnw2;
	if (cAnw2 == 'F' || cAnw2 == 'f')
	{
		++iScore;
		cout << "CORRECT! Your score is " << iScore << " !\n";
	}
	else if (cAnw2 == 'T' || cAnw2 == 't')
	{
		cout << "Incorrect! \'rand()%26+25\' produces 25 -> 50!\n";
	}
	else
		cout << "ERROR! You did not input T or F!\n";

	cout << "A switch's \'default\' handles any unmatched values: ";
	cin >> cAnw3;
	if (cAnw3 == 'T' || cAnw3 == 't')
	{
		++iScore;
		cout << "CORRECT! Your score is " << 1 << " !\n";
	}
	else if (cAnw3 == 'F' || cAnw3 == 'f')
	{
		cout << "Incorrect!\n";
	}
	else
	{
		cout << "ERROR! You did not input T or F!\n"; 
	}
	cout << "Final score is : " << iScore;

		return EXIT_SUCCESS;
}