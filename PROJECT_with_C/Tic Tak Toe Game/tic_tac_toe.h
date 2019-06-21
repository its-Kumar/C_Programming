#include<stdlib.h>
#include<stdio.h>
#define SIDE 3
#define COMPUTER 0
#define HUMAN 1


void show_board(char board[][SIDE]);
/*
*Function to show the board
*/

void show_instructions();
/*
*Function to show instructions
*/

void intialize(char board[][SIDE],int moves[]);
/*
*Function to intializing the game
*/

void winner(int turn);
/*
*Declear the winner
*/

int game_over(char board[][SIDE]);
/*
*Declear game over
*/

int row_crossed(char board[][SIDE]);
/*
*in case of row crossed 
*/

int colomn_crossed(char board[][SIDE]);
/*
*in case of colomn crossed
*/

int diagonal_crossed(char board[][SIDE]);
/*
*in case of diagonal crossed
*/


