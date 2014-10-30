#include "lab2.h"
using namespace std;
#define DAYSOFAYEAR 365
#define HOURSOFADAY	24
#define MINSOFANHOUR 60


int Q1()
{
	unsigned int uiAge = 0;
	cout << "How old are you? ";
	cin >> uiAge;
	cout << "Wow, that's " << uiAge*DAYSOFAYEAR << " days!" << endl
		<< "Or " << uiAge*DAYSOFAYEAR*HOURSOFADAY << " hours." << endl
		<< "Or " << uiAge*DAYSOFAYEAR*HOURSOFADAY*MINSOFANHOUR << " minutes." << endl;

	return EXIT_SUCCESS;
}