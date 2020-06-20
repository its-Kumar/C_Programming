//program to remove all comment line from a syntaxerror free C file

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp1, *fp2;
    char name[50];
    char c1, c2, found = 'n';
    printf("Enter the file name : ");
    scanf("%s", name);

    if ((fp1 = fopen(name, "r")) == NULL)
    {
        printf("Error in openning file...\n");
        exit(1);
    }
    fp2 = fopen("new.c", "w");
    c1 = fgetc(fp1);
    c2 = fgetc(fp1);

    while (c2 != EOF)
    {
        if (c1 == '/' && c2 == '*')
            found = 'y';
        if (found == 'n')
            fputc(c1, fp2);
        if (c1 == '*' && c2 == '/')
        {
            found = 'n';
            c2 = fgetc(fp1);
        }
        c1 = c2;
        c2 = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
