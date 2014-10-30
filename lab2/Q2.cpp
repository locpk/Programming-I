#include "lab2.h"
using namespace std;

int Q2()
{
	int iHour = 0;
	cout << "Enter the hour to convert from Pacific to Eastern: ";
	cin >> iHour;
	while (iHour > 12 || iHour < 0)
	{
		cout << "That is not a valid time!" << endl
			<< "Please enter again: ";
		cin >> iHour;
	}
	if (iHour + 3 > 12)
		cout << " That would be " << iHour + 3 - 12 << " Eastern. " << endl;
	else 
		cout << " That would be " << iHour + 3 << " Eastern. " << endl;
	return EXIT_SUCCESS;
}