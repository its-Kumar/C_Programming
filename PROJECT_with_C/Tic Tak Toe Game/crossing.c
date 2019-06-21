#include "tic_tac_toe.h"
int row_crossed(char board[][SIDE]){
	int i;
	
	for(i=0; i<SIDE; i++){
		if( board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] !=' ')
			return 1;
	}
	return 0;
}

int colomn_crossed(char board[][SIDE]){
	int i;
	
	for(i=0; i<SIDE; i++){
		if( board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] !=' ')
			return 1;
	}
	return 0;
}

int diagonal_crossed(char board[][SIDE]){
	
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] !=' ')
		return 1;
	
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] !=' ')
		return 1;
		
	return 0;
}

