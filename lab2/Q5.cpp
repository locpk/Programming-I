#include "lab2.h"
#define RED 1
#define GREEN 2
#define BLUE 3
#define Aquamabrown 13
int Q5()
{
	using std::cout;
	using std::cin;
	unsigned int uiFlag = 0;
	cout << "What color Popsicle do you want from the freezer? \n"
		<< "1)  Red\n"
		<< "2)  Green\n"
		<< "3)  Blue\n"
		<< "13) Aquamabrown\n"
		<< "> ";
	cin >> uiFlag;
	switch (uiFlag)
	{
	case RED:
		cout << "Ah! Red cherry, good choice!\n";
		break;
	case GREEN:
		cout << "Ah! Green cherry, good choice!\n";
		break;
	case BLUE:
		cout << "Ah! Blue cherry, good choice!\n";
		break;
	case Aquamabrown:
	default:
		cout << " Uh ... I don't know how long that one's been in there ... \n";
		break;
	}

	return EXIT_SUCCESS;
}