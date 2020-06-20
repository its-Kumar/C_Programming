#include <stdlib.h>
#include <stdio.h>
#define PLAYER 0
#define COMPUTER 1

void show_board(char board[]);
/*
*Function to show the board
*/

void show_instructions();
/*
*Function to show instructions
*/

void intialize(char board[]);
/*
*Function to intializing the game
*/

void winner(char[], int);
/*
*Declear the winner
*/

int game_over(char board[]);
/*
*Declear game over
*/

int row_crossed(char board[]);
/*
*in case of row crossed
*/

int colomn_crossed(char board[]);
/*
*in case of colomn crossed
*/

int diagonal_crossed(char board[]);
/*
*in case of diagonal crossed
*/
void place_marker(char board[], int position, char marker);

int check_positon(char board[], int position);
