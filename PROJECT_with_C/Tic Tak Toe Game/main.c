#include "tic_tac_toe.h"
int check(char board[][SIDE],int x,int y){
	if(board[x][y] == ' ')
		return 1;
	return 0;
}
int main(void){
	char choice,HUMAN_MOV,COMPUTER_MOV;
	int moves[SIDE*SIDE],mov_index=0,turn=1,cell,x,y,temp;
	char board[SIDE][SIDE];
	
	intialize(board,moves);
	show_instructions();
	printf("\n\t\t\tEnter o for 'O' and x for 'X' :");
	
	while (!(choice == 'o' || choice == 'x')){
	
	scanf("%c",&choice);
	
	if(choice == 'o'){
		HUMAN_MOV='O';
		COMPUTER_MOV='X';
	}
	else if(choice == 'x'){
		HUMAN_MOV='X';
		COMPUTER_MOV='O';
	}
	}
	srand(time(NULL));
	
	while(game_over(board)==0 && mov_index !=SIDE*SIDE){
		if(turn == COMPUTER){
			temp=rand()%(SIDE*SIDE);
			x= moves[temp] / SIDE;
			y= moves[temp] % SIDE;
			if(check(board,x,y))
				{
				board[x][y] = COMPUTER_MOV;
				
				printf("\n\t\tComputer has put a %c at %d\n",COMPUTER_MOV,temp);
				show_board(board);
				turn= HUMAN;
				}
			else{
				mov_index--;
				turn==COMPUTER;
			}
			mov_index++;
		}
		else if(turn==HUMAN){
			printf("\n\t\t\tChoose : ");
			scanf("%d",&cell);
			x=moves[cell] / SIDE;
			y=moves[cell] % SIDE;
			if(check(board,x,y))
				{
					board[x][y]=HUMAN_MOV;
					system("cls");
					printf("\n\t\tYou have put a %c at %d",HUMAN_MOV,cell);
					show_board(board);
					turn=COMPUTER;
				}
			else{
				printf("\t\tThe cell is already filled...");
				/*scanf("%d",&cell);
				x=moves[cell] / SIDE;
				y=moves[cell] % SIDE;
				board[x][y]=HUMAN_MOV;*/
				mov_index--;
				turn=HUMAN;
			}
			mov_index++;
		}
	}
	if(game_over(board)==0 && mov_index==SIDE*SIDE)
		printf("\n\t\t\tIt's a Draw..!!\n");
	else{
		if(turn ==COMPUTER)
			turn=HUMAN;
		else if(turn == HUMAN)
			turn =COMPUTER;
		winner(turn);
	}
	return 0;
}
