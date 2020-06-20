#include <stdio.h>
#include <string.h>

int is_binary(char *s)
{
    int l = strlen(s);
    int len = 0;
    while (*s)
    {
        if (*s == '1' || *s == '0')
            len++;
        s++;
    }
    if (len == l - 1)
        return 1;
    return 0;
}

int main(void)
{
    char str[20];
    fgets(str, 20, stdin);
    puts(str);
    if (is_binary(str))
        printf("Binary String...\n");
    else
        printf("Not a binary string...\n");
    return 0;
}
