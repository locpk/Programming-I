#include<iostream>
#include"Console.h"
#define BOARD_ROW 3
#define BOARD_COL 3




void PlayerMoves(int* iPlayerRow, int* iPlayerCol, size_t* iOffsetx, size_t* iOffsety);
void AiMoves(char cBoard[][BOARD_COL]);
void PrintBoard(const char cBoard[][BOARD_COL], size_t* iOffsetx, size_t* iOffsety);
void ClearBoard(char cBoard[][BOARD_COL]);
bool ValidatingMoves(int* iInput);
bool CheckBoard(const char cBoard[][BOARD_COL], const char cDelimiter);
bool Quit();
int* ScanBoard();


