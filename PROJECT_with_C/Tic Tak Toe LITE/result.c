#include "tic_tac_toe.h"
int row_crossed(char board[])
{
	if ((board[0] == board[1] && board[1] == board[2] && (board[2] == 'X' || board[2] == 'O')) ||
		(board[3] == board[4] && board[4] == board[5] && (board[5] == 'X' || board[5] == 'O')) ||
		(board[6] == board[7] && board[7] == board[8] && (board[8] == 'X' || board[8] == 'O')))
		return 1;
	else
		return 0;
}

int colomn_crossed(char board[])
{
	if ((board[0] == board[3] && board[3] == board[6] && (board[6] == 'X' || board[6] == 'O')) ||
		(board[1] == board[4] && board[4] == board[7] && (board[7] == 'X' || board[7] == 'O')) ||
		(board[2] == board[5] && board[5] == board[8] && (board[2] == 'X' || board[2] == 'O')))
		return 1;
	else
		return 0;
}

int diagonal_crossed(char board[])
{
	if ((board[0] == board[4] && board[4] == board[8] && (board[8] == 'X' || board[8] == 'O')) ||
		(board[2] == board[4] && board[4] == board[6] && (board[2] == 'X' || board[2] == 'O')))
		return 1;
	else
		return 0;
}

void winner(char board[], int turn)
{
	if (row_crossed(board) || colomn_crossed(board) || diagonal_crossed(board))
	{
		if (turn == COMPUTER)
			printf("\n Computer wins..!!\n");
		else if (turn == PLAYER)
			printf("\n Player wins..!!\n");
	}
	return;
}

int game_over(char board[])
{
	if (row_crossed(board) || colomn_crossed(board) ||
		diagonal_crossed(board))
		return 1;
	else
		return 0;
}
