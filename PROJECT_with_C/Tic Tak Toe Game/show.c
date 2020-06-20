#include "tic_tac_toe.h"
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

void show_board(char board[][SIDE])
{

	printf("\n\n");

	printf("\t\t\t	%c | %c | %c	\n", board[0][0], board[0][1], board[0][2]);
	printf("\t\t\t------------------------------\n");
	printf("\t\t\t	%c | %c | %c	\n", board[1][0], board[1][1], board[1][2]);
	printf("\t\t\t------------------------------\n");
	printf("\t\t\t	%c | %c | %c	\n", board[2][0], board[2][1], board[2][2]);

	return;
}
