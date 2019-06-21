#include "tic_tac_toe.h"
void winner(int turn){
	if(turn == COMPUTER)
		printf("\nCOMPUTER has won!!\n");
	else if(turn == HUMAN)
		printf("\nYou Won!!\n");
	return;
}
int game_over(char board[][SIDE]){
	return( row_crossed(board) || colomn_crossed(board) || diagonal_crossed(board));
}

