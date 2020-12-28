#include <stdio.h>

/*
Duck numbers are those which contains zeroes except the first place.
707059 is a duck number
07070 is not a duck number
23234 is not a duck number
*/

int is_duck(char *num)
{
    int i;
    if (num[0] == '0')
        return 0;
    for (i = 1; i < strlen(num); i++)
    {
        if (num[i] == '0')
            return 1;
    }
    return 0;
}
int main(void)
{
    char num[20];
    printf("Enter any number : ");
    scanf("%s", &num);
    if (is_duck(num))
        printf("\n%s is a Duck number. ", num);
    else
        printf("\n%s is not a Duck number. ", num);

    return 0;
}
