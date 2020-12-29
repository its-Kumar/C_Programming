#include <stdio.h>

void main()
{
	FILE *fs, *ft;
	char ch;
	fs = fopen("abc.txt", "r");
	if (fs == NULL)
	{
		printf("\nUnable to open source file......");
		return 0;
		exit(0);
	}
	ft = fopen("nnnm", "w");
	if (ft == NULL)
	{
		printf("\nUnable to open target file......");
		return 0;
		exit(0);
	}
	while (1)
	{
		ch = fgetc(fs);
		fputc(ch, ft);
		if (ch == EOF)
			break;
	}
	fclose(fs);
	fclose(ft);
	printf("File copied successfully.......");
}
