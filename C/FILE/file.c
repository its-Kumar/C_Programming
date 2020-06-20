//program of fgetc in file

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;
    if ((fp = fopen("myfile", "r")) == NULL)
    {
        printf("Error in openning file...");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
    return 0;
}
