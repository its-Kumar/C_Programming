int check_positon(char board[], int position)
{
    if (board[position] == ' ')
        return 1;
    else
        return 0;
}
void place_marker(char board[], int position, char marker)
{
    if (check_positon(board, position))
    {
        board[position] = marker;
    }
    else
        return;
}
