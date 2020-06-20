#include <stdio.h>
#include <stdlib.h>
#define COMPUTER 1
#define HUMAN 2
#define SIDE 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	char board[SIDE][SIDE];
	int turn, moves[SIDE * SIDE], choice = 0;
	int mov_index = 0, x, y;
	//intialize(board,moves);
	//	show_instructions();

	printf("\t\tEnter 0 to choose 'O' and 1 to 'X' :\n");
	scanf("\t\t%d", &choice);
	/*#if choice==0
	#define HUMAN_MOV 'O'
	#define COMPUTER_MOV 'X'
	#else
	#define HUMAN_MOV 'X'
	#define COMPUTER_MOV 'O'
	#endif

	while(game_over(board) == 0 && mov_index !=SIDE*SIDE){
		if(turn == COMPUTER){
			x=moves[mov_index] / SIDE;
			y=moves[mov_index] % SIDE;
			board[x][y] = COMPUTER_MOV;
			show_board(board);
			mov_index++;
			turn= HUMAN;
		}
		else if(turn == HUMAN){
			x=moves[mov_index] / SIDE;
			y=moves[mov_index] % SIDE;
			board[x][y] = COMPUTER_MOV;
			show_board(board);
			mov_index++;
			turn= COMPUTER;
		}
	}
	if(game_over(board) == 0 && mov_index == SIDE*SIDE)
		printf("\n it's a draw..!!\n");
	else{
		if(turn ==COMPUTER)
			turn=HUMAN;
		else if(turn == HUMAN)
			turn =COMPUTER;

		winner(turn);
	}
	*/
	return 0;
}
