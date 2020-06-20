/*
*Devide N into two parts i.e. A and B
*Such that A+B = N
*Nither A nor B contain a digit 4.
*/
#include <stdio.h>

void check(long int n, long int *a, long int *b);
int is_digit4(long int num);
int main(void)
{
    long int n, a = 0, b = 0;

    printf("Enter N :\n");
    scanf("%ld", &n);
    check(n, &a, &b);
    printf("\n\tN = %ld\n\tA = %ld\n\tB = %ld\n\n", n, a, b);

    return 0;
}
void check(long int n, long int *a, long int *b)
{
    if (n % 2 == 0)
        *a = *b = n / 2;
    else
    {
        *a = n / 2;
        *b = (n / 2) + 1;
    }

    while (is_digit4(*a) != 0 || is_digit4(*b) != 0)
    {
        (*a)++;
        (*b)--;
    }
}
int is_digit4(long int num)
{
    long int d;
    while (num > 0)
    {
        d = num % 10;
        if (d == 4)
        {
            return 1;
        }
        num /= 10;
    }
    return 0;
}
