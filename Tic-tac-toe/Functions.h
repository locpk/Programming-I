#include<iostream>
#include"Console.h"
#define BOARD_ROW 3
#define BOARD_COL 3




void PlayerMoves(int*, int*);
void AiMoves(char[][3],int*, int*);
void PrintBoard();
bool ValidatingMoves(int*, int*);
bool Quit();
int* ScanBoard();


