#include "lab2.h"

int Q4()
{
	using std::cout;
	using std::cin;
	int iMultiple = 0;
	cout << "Please enter a multiple of 5: ";
	cin >> iMultiple;
	if (iMultiple % 5 == 0)
		cout << "This is correct!\n";
	else
		cout << "This is not correct!\n";
	return EXIT_SUCCESS;
}