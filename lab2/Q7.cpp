#include "lab2.h"
#include <cstdlib>
#include <ctime>
int Q7()
{
	using std::cout;
	using std::cin;
	srand(static_cast<unsigned int> (time(nullptr)));
	cout << "It is time for dear Grandmother's noon coffee.\n";
	cout << "How many sugar cubes do you think she wants?\n"
		<< "> ";

	int iCubes = 0;
	cin >> iCubes;
	int iShewants = rand() % 6 +2;
	
	if (iShewants == iCubes)
		cout << "you got it!\n";
	else if (iCubes < iShewants)
		cout << "My child! That is far too less for my diabetic soul! I wanted " << iShewants << " !";
	else
		cout << "My child! That is far too many for my diabetic soul! I wanted " << iShewants << " !";
	return EXIT_SUCCESS;
}