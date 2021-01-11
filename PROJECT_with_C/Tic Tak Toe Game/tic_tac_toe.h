#include <stdlib.h>
#include <stdio.h>
#define SIDE 3 //sides of the game board
#define COMPUTER 0
#define HUMAN 1

/*
*Function to show the board
*/
void show_board(char board[][SIDE]);

/*
*Function to show instructions
*/
void show_instructions();

/*
*Function to intializing the game
*/
void intialize(char board[][SIDE], int moves[]);

/*
*Declear the winner
*/
void winner(int turn);

/*
*Declear game over
*/
int game_over(char board[][SIDE]);

/*
*in case of row crossed
*/
int row_crossed(char board[][SIDE]);

/*
*in case of colomn crossed
*/
int colomn_crossed(char board[][SIDE]);

/*
*in case of diagonal crossed
*/
int diagonal_crossed(char board[][SIDE]);
