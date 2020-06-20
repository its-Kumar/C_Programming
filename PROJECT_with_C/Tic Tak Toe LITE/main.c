#include "tic_tac_toe.h"

char board[9];
int main(void)
{
	char player_marker = '\0', computer_marker = '\0';
	int turn = PLAYER, position = 9, moves = 0;

	srand(time(NULL));

	intialize(board);
	show_instructions();
	printf("\n\t\t\tEnter 'O' or 'X' to choose: ");
	printf("\nChoose Marker : ");
	while ((player_marker != 'X') && (player_marker != 'O'))
	{
		fflush(stdin);
		scanf("%c", &player_marker);
	}

	if (player_marker == 'O')
		computer_marker = 'X';
	else
		computer_marker = 'O';

	while (!(game_over(board) || moves == 9))
	{
		if (turn == PLAYER)
		{
			while (!check_positon(board, position))
			{
				printf("\tChoose position : ");
				fflush(stdin);
				scanf("%d", &position);
			}
			place_marker(board, position, player_marker);
			moves++;
			system("CLS");
			printf("\n\t\tPlayer has put a %c at %d\n", player_marker, position);
			show_board(board);
			winner(board, turn);
			turn = COMPUTER;
		}
		else if (turn == COMPUTER)
		{
			while (!check_positon(board, position))
				position = rand() % 9;
			place_marker(board, position, computer_marker);
			moves++;
			printf("\n\t\tComputer has put a %c at %d\n", computer_marker, position);
			show_board(board);
			winner(board, turn);
			turn = PLAYER;
		}
	}
	if (!game_over(board) && moves == 9)
		printf("\nGame Draw..!!\n");
	return 0;
}
