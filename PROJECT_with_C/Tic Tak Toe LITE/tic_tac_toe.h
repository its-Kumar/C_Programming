#include <stdlib.h>
#include <stdio.h>
#define PLAYER 0
#define COMPUTER 1

/**
 * @brief Function to show the board
 *
 * @param board
 */
void show_board(char board[]);

/**
 * @brief Function to show instructions
 *
 */
void show_instructions();

/**
 * @brief Function to intializing the game
 *
 * @param board
 */
void intialize(char board[]);

/**
 * @brief Declear the winner
 *
 */
void winner(char[], int);

/**
 * @brief Declear game over
 *
 * @param board
 * @return int
 */
int game_over(char board[]);

/**
 * @brief in case of row crossed
 *
 * @param board
 * @return int
 */
int row_crossed(char board[]);

/**
 * @brief in case of colomn crossed
 *
 * @param board
 * @return int
 */
int colomn_crossed(char board[]);

/**
 * @brief in case of diagonal crossed
 *
 * @param board
 * @return int
 */
int diagonal_crossed(char board[]);

/**
 * @brief place marker on the board on given position
 *
 * @param board
 * @param position
 * @param marker
 */
void place_marker(char board[], int position, char marker);

/**
 * @brief check position is empty or not
 *
 * @param board
 * @param position
 * @return int
 */
int check_positon(char board[], int position);
