//Recieving strings from keyboard and writes them to file.
#include <stdio.h>
main()
{
	FILE *fp;
	char s[80];

	fp = fopen("poem.txt", "w");
	if (fp == NULL)
	{
		puts("Cnnot open file.");
		exit(0);
	}

	printf("\nEnter a few lines of text:\n");
	while (strlen(gets(s)) > 0)
	{
		fputs(s, fp);
		fputs("\n", fp);
	}
	fclose(fp);
}
