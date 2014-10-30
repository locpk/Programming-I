#include "lab2.h"
#include <ctime>
#include <cstdlib>

//define dice
#define D4 1
#define D6 2
#define D8 3
#define D10 4
#define D12 5
#define D20 6
#define D100 7

int Q6()
{
	using std::cout;
	using std::cin;
	while (true){
		int iChoice{ 0 };
		cout << "Which die would you like to roll? \n"
			<< "1) D4\n"
			<< "2) D6\n"
			<< "3) D8\n"
			<< "4) D10\n"
			<< "5) D12\n"
			<< "6) D20\n"
			<< "7) D100\n"
			<< "> ";

		srand(static_cast<unsigned int> (time(nullptr)));
		cin >> iChoice;
		switch (iChoice)
		{
		case D4:
			cout << rand() % 4 + 1 << std::endl;
			break;
		case D6:
			cout << rand() % 6 + 1 << std::endl;
			break;
		case D8:
			cout << rand() % 8 + 1 << std::endl;
			break;
		case D10:
			cout << rand() % 10 + 1 << std::endl;
			break;
		case D12:
			cout << rand() % 12 + 1 << std::endl;
			break;
		case D20:
			cout << rand() % 20 + 1 << std::endl;
			break;
		case D100:
			cout << rand() % 100 + 1 << std::endl;
			break;
		default:
			cout << "No!!!\n";
			break;
		}
	}
	return EXIT_SUCCESS;
}