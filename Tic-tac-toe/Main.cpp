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

static size_t iOffsetx = Console::WindowWidth() / 2;
static size_t iOffsety = Console::WindowHeight() / 2;

int main()
{
	
	//player move identifiers
	int iPlayerRow{ 0 }, iPlayerCol{ 0 };
	while (true)
	{

		//game loop
		while (true)
		{
			//print board
			Console::Clear();
			iOffsetx = Console::WindowWidth() / 2;
			iOffsety = Console::WindowHeight() / 2;
			PrintBoard(cBoard, &iOffsetx, &iOffsety);


			//ask player for move
			PlayerMoves(&iPlayerRow, &iPlayerCol, &iOffsetx, &iOffsety);
			if (cBoard[iPlayerRow][iPlayerCol] == ' ')
			{
				cBoard[iPlayerRow][iPlayerCol] = 'X';
			}
			else if (cBoard[iPlayerRow][iPlayerCol] == 'X' || cBoard[iPlayerRow][iPlayerCol] == 'O')
			{
				Console::SetCursorPosition(iOffsetx, ++iOffsety);
				cout << "Already there, can't make the move!! Again!\n";
				PlayerMoves(&iPlayerRow, &iPlayerCol, &iOffsetx, &iOffsety);
				cBoard[iPlayerRow][iPlayerCol] = 'X';
			}
			//check player
			if (CheckBoard(cBoard, 'X'))
			{
				Console::SetCursorPosition(iOffsetx, ++iOffsety);
				cout << "You wins!!!" << "\n";
				break;
			}

			Console::Clear();
			iOffsetx = Console::WindowWidth() / 2;
			iOffsety = Console::WindowHeight() / 2;
			PrintBoard(cBoard, &iOffsetx, &iOffsety);
			Console::SetCursorPosition(iOffsetx, +iOffsety);
			cout << "Tom is thinking!!!" << "\n";
			Sleep(2000);


			//AI
			cout << "\tTom's random move!\t\n";
			AiMoves(cBoard);
			Console::Clear();
			iOffsetx = Console::WindowWidth() / 2;
			iOffsety = Console::WindowHeight() / 2;
			PrintBoard(cBoard, &iOffsetx, &iOffsety);
			//check ai
			if (CheckBoard(cBoard, 'O'))
			{
				Console::SetCursorPosition(iOffsetx, ++iOffsety);
				cout << "AI wins!!!" << "\n";
				break;
			}
			
			
		}
		ClearBoard(cBoard);
		//quit game
		Console::SetCursorPosition(iOffsetx, ++iOffsety);
		if (Quit())
			break;
	}

	return EXIT_SUCCESS;
}


void PrintBoard(const char cBoard[][BOARD_COL], size_t* iOffsetx, size_t* iOffsety)
{

	for (size_t i = 0; i < 3; i++)
	{
		Console::SetCursorPosition(*iOffsetx, *iOffsety);
		for (size_t j = 0; j < 3; j++)
		{
			cout << cBoard[i][j];
			cout << "|";
			if (j == 2)
				Console::SetCursorPosition(*iOffsetx, ++*iOffsety);
		}

		if (i == 3)
			(*iOffsety)++;
		cout << "-----";
		(*iOffsety)++;
	}

	cout << endl << endl;
}

void ClearBoard(char cBoard[][BOARD_COL])
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cBoard[i][j] = ' ';
		}
	}
}