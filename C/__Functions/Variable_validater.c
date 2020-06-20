//Create a program that takes the variable name as input and outputs whether it is valid or not

#include <stdio.h>
#include <ctype.h>

int isValid(char var[])
{
    const char keys[32][11] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
        "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register",
        "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while"};
    int i;

    i = 0;
    for (i = 0; i < 32; i++)
        if (strcmp(var, keys[i]) == 0)
            return 0;
    while (var[i] != '\0')
    {
        if (isdigit(var[0]))
            return 0;
        if (ispunct(var[i]) || isspace(var[i]))
            return 0;
        i++;
    }
    return 1;
}

int main(void)
{
    char var[32];

    printf("Enter the variable name : ");
    gets(var);
    if (isValid(var))
        printf("\nValid\n");
    else
        printf("\nNot Valid\n");

    return 0;
}
