#include "tic_tac_toe.h"
void intialize(char board[][SIDE],int moves[]){
	int i,j;
	for(i=0;i<SIDE;i++){
		for(j=0;j<SIDE;j++){
			board[i][j] =' ';
		}
	}
	
	//file the moves with numbers
	for(i=0; i<SIDE*SIDE; i++)
		moves[i]=i;
	
	return;
}

