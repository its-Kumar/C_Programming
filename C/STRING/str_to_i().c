//program to convert integer to string and string to integer

#include <stdio.h>
#include <ctype.h>
int str_to_i(char str[])
{
    int i, num = 0, sign;
    i = 0;

    while (isspace(str[i])) //skip isspace
        i++;
    sign = (str[i] == '-') ? -1 : 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (isdigit(str[i]))
        num = num * 10 + (str[i++] - '0');
    return sign * num;
}
double str_to_d(char str[])
{
    int i, j, sign;
    double num = 0;
    i = 0;

    while (isspace(str[i])) //skip isspace
        i++;
    sign = (str[i] == '-') ? -1 : 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (isdigit(str[i]))
        num = num * 10 + (str[i++] - '0');
    if (str[i] == '.')
        i++;
    j = i;
    while (isdigit(str[i]))
        num = num * 10 + (str[i++] - '0');
    return sign * num / pow(10, i - j);
}
int main(void)
{
    char str[20];
    printf("Enter a string : ");
    gets(str);
    puts(str);
    printf("%d\n", str_to_i(str));

    printf("\n\nEnter a string : ");
    gets(str);
    puts(str);
    printf("%lf\n", str_to_d(str));

    return 0;
}
