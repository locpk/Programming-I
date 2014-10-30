#include "lab3.h"

int Q1()
{
	for (int i = 0; i <= 100; ++i)
	{
		if (i % 5 == 0)
			std::cout << " " << i << " ";
	}
	std::cout << "\n";
	for (int i = 100; i >= 0; --i)
	{
		if (i % 5 == 0)
			std::cout << " " << i << " ";
	}
	return EXIT_SUCCESS;
}