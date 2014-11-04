#include"Functions.h"
#include<ctime>
#include<cstdlib>

void AiMoves(char iBoard[][3],int* iPlayerRow, int* iPlayerCol)
{
	srand(static_cast<unsigned int> (time(nullptr)));
	while (true)
	{
		*iPlayerRow = rand() % 3;
		*iPlayerCol = rand() % 3;
		if (iBoard[*iPlayerRow][*iPlayerCol] == ' ')
			break;
	}
}

//int* ScanBoard()
//{
//	int iMoves[9] = { 0 };
//	int iIndex = 0;
//	for (size_t i = 0; i < 3; i++)
//	{
//		for (size_t j = 0; j < 3; j++)
//		{
//			if (cBoard[i][j] != ' ')
//				iMoves[iIndex] = 1;
//			iIndex++;
//		}
//	return iMoves;
//}