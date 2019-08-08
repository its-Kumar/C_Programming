#include "tic_tac_toe.h"

void intialize(char board[])
{
	int i;
	for(i=0; i<9; i++)
		board[i] = ' ';
}

void show_instructions()
{
	printf("\t\t\t Welcome to Tic-Tac-Toe Game\n\n");
	printf("\n\tChoose a cell numbered from 0 to 8 as below"
		   " and play \n\n");
	printf("\t\t\t	0 | 1 | 2	\n");
	printf("\t\t\t------------------------------\n");
	printf("\t\t\t	3 | 4 | 5	\n");
	printf("\t\t\t------------------------------\n");
	printf("\t\t\t	6 | 7 | 8	\n");

	printf("\n-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n\n");

	return;
}

void show_board(char board[])
{

	printf("\n\n");

	printf("\t\t\t	%c | %c | %c	\n", board[0], board[1], board[2]);
	printf("\t\t\t------------------------------\n");
	printf("\t\t\t	%c | %c | %c	\n", board[3], board[4], board[5]);
	printf("\t\t\t------------------------------\n");
	printf("\t\t\t	%c | %c | %c	\n", board[6], board[7], board[8]);

	printf("\n\n");
	return;
}
