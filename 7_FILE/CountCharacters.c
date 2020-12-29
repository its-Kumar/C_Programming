#include <stdio.h>

void main()
{
	int noc, nob, nol;
	FILE *fp;
	char ch;
	fp = fopen("45.c", "r");
	if (fp == NULL)
	{
		printf("\nUnable to open source file......");
		return 0;
		exit(0);
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
			break;
		if (ch == ' ')
			nob++;
		if (ch == '\n')
			nol++;
		noc++;
	}
	fclose(fp);
	printf("\nBlanks = %d\nLines = %d\nCharacters = %d", nob, nol, noc);
}
