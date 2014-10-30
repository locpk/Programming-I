#include "lab3.h"

int Q2()
{
	using std::cout;
	using std::cin;
	int iScore1{ -1 }, iScore2{ -1 };
	cout << "How many runs did the Cubs score? \b";
	while (!(cin >> iScore1))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "How many runs did the Cubs score? \b";
	}

	cout << "How many runs did the White Sox score? \b";
	while (!(cin >> iScore2))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "How many runs did the White Sox score? \b";

	}
	cout << "Go Cubbies!!!";
	return EXIT_SUCCESS;

}