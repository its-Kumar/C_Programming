//reads strings from the file and displays them on the screen
#include "stdio.h"
main()
{
	FILE *fp;
	char s[80];

	fp = fopen("poem.txt", "r");
	if (fp == NULL)
	{
		puts("Cnnot open file.");
		exit(0);
	}
	while (fgets(s, 79, fp) != NULL)
		printf("%s", s);

	fclose(fp);
}
