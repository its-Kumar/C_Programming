//program for find square root of a given number

#include <stdio.h>

int square_root(int n)
{
    int i = 1, result = 0;

    while (result <= n)
    {
        i++;
        result = i * i;
    }
    return i - 1;
}

int main(void)
{
    int num;

    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Square Root of %d is = %d ", num, square_root(num));
    return 0;
}
