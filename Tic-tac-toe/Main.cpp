#include"Functions.h"

using namespace System;
using std::cout;
using std::cin;
using std::endl;

// game board
char cBoard[BOARD_ROW][BOARD_COL] =
{
	{ ' ', ' ', ' ' },

	{ ' ', ' ', ' ' },

	{ ' ', ' ', ' ' },

};

int main()
{
	//player move identifiers
	int iPlayerRow{ 0 }, iPlayerCol{ 0 };
	//game loop
	while (true)
	{
		PlayerMoves(&iPlayerRow, &iPlayerCol);
		//Draw current board
		if (cBoard[iPlayerRow][iPlayerCol] == ' ')
		{
			cBoard[iPlayerRow][iPlayerCol] = 'X';
		}
		else if (cBoard[iPlayerRow][iPlayerCol] == 'X' || cBoard[iPlayerRow][iPlayerCol] == 'O')
		{
			cout << "Already there, can't make the move!! Again!\n";
			PlayerMoves(&iPlayerRow, &iPlayerCol);
			cBoard[iPlayerRow][iPlayerCol] = 'X';
		}
		//AI
		cout << "\tTom's random move!\t\n";
		AiMoves(cBoard,&iPlayerRow, &iPlayerCol);
		if (cBoard[iPlayerRow][iPlayerCol] == ' ')
		{
			cBoard[iPlayerRow][iPlayerCol] = 'O';
			PrintBoard();
		}
		else if (cBoard[iPlayerRow][iPlayerCol] == 'X' || cBoard[iPlayerRow][iPlayerCol] == 'O')
		{
			AiMoves(cBoard,&iPlayerRow, &iPlayerCol);
			cBoard[iPlayerRow][iPlayerCol] = 'O';
			PrintBoard();
		}
	}

	return EXIT_SUCCESS;
}


void PrintBoard()
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << cBoard[i][j];
			cout << "|";
			if (j == 3)
				cout << "\n";
		}
		if (i == 3)
			cout << "\n";
		cout << "\n-------\n";
	}
}