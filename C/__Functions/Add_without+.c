//program for adding two numbers without using + operator

#include <stdio.h>

int Add(int a, int b)
{
    int max, min, carry;

    max = (a > b) ? a : b;
    min = (a > b) ? b : a;
    while (max != 0)
    {
        carry = min & max;
        min = min ^ max;
        max = carry << 1;
    }
    return min;
}
int main(void)
{
    int n1, n2;

    printf("Enter any two numbers : ");
    scanf("%d%d", &n1, &n2);

    printf("%d + %d is = %d", n1, n2, Add(n1, n2));

    return 0;
}
