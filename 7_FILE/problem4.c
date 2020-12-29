#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_end(int ch)
{
    switch (ch)
    {
    case '\n':
    case '\t':
    case ' ':
    case ', ':
    case '.':
    case ':':
    case ';':
    case '-':
        return 1;
    }
    return 0;
}

int display(char line[], char wordtext[])
{
    int i, j, k, len;
    char str[80];
    int count = 0;
    len = strlen(wordtext);
    for (i = 0; line[i] != '\0'; i++)
    {
        k = 0;
        if (is_end(line[i - 1]) && is_end(line[i + len]))
        {
            for (k = 0, j = i; k < len; j++, k++)
                str[k] = line[j];
            str[k] = '\0';
            if (strcmp(str, wordtext) == 0)
                count++;
        }
    }
    if (count > 0)
    {
        printf("%s", line);
        printf("Count = %d\n", count);
    }
    return count;
}
int main(void)
{
    char line[81];
    int total = 0;
    FILE *fptr;

    if ((fptr = fopen("test.txt", "r")) == NULL)
    {
        printf("File doesn't exist\n");
        exit(1);
    }
    while ((fgets(line, 81, fptr)) != NULL)
        total = total + display(line, "that");
    printf("Number of times the given word occurs in file is %d\n", total);
    fclose(fptr);
    return 0;
}
