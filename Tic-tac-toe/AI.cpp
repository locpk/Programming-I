#include"Functions.h"
#include<ctime>
#include<cstdlib>

void AiMoves(char cBoard[][3])
{
	srand(static_cast<unsigned int> (time(nullptr)));
	while (true)
	{
		size_t iPlayerRow = rand() % 3;
		size_t iPlayerCol = rand() % 3;
		if (cBoard[iPlayerRow][iPlayerCol] == ' ')
		{
			cBoard[iPlayerRow][iPlayerCol] = 'O';
			break;
		}
	}
}

//int* ScanBoard()
//{
//	int iMoves[9]  {};
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

bool CheckBoard(const char cBoard[][BOARD_COL], const char cDelimiter)
{
	//check rows
	if (cBoard[0][0] == cDelimiter && cBoard[0][1]== cDelimiter && cBoard[0][2] == cDelimiter)
	{
		return true;
	}
	if (cBoard[1][0] == cDelimiter && cBoard[1][1] == cDelimiter && cBoard[1][2] == cDelimiter)
	{
		return true;
	}
	if (cBoard[2][0] == cDelimiter && cBoard[2][1] == cDelimiter && cBoard[2][2] == cDelimiter)
	{
		return true;
	}
	//check columns
	if (cBoard[0][0] == cDelimiter && cBoard[1][0] == cDelimiter && cBoard[2][0] == cDelimiter)
	{
		return true;
	}
	if (cBoard[0][1] == cDelimiter && cBoard[1][1] == cDelimiter && cBoard[2][1] == cDelimiter)
	{
		return true;
	}
	if (cBoard[0][2] == cDelimiter && cBoard[1][2] == cDelimiter && cBoard[2][2] == cDelimiter)
	{
		return true;
	}
	//check diagonals
	if (cBoard[0][0] == cDelimiter && cBoard[1][1] == cDelimiter && cBoard[2][2] == cDelimiter)
	{
		return true;
	}
	if (cBoard[0][2] == cDelimiter && cBoard[1][1] == cDelimiter && cBoard[2][0] == cDelimiter)
	{
		return true;
	}
	// no winner
	return false;
}