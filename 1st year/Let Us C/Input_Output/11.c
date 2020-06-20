//A File copy program

#include <stdio.h>
main(int argc, char *argv[])
{
	FILE *fs, *ft;
	char ch;

	if (argc != 3)
	{
		puts("Improper number of arguments");
		exit(0);
	}
	fs = fopen(argv[1], "r");
	if (fs == NULL)
	{
		puts("Cannot open source file.");
		exit(0);
	}

	ft = fopen(argv[2], "w");
	if (ft == NULL)
	{
		puts("cannot open target file.c");
		fclose(fs);
		exit(0);
	}
	while (1)
	{
		ch = fgetc(fs);

		if (ch == EOF)
			break;
		else
			fputc(ch, ft);
	}
	fclose(fs);
	fclose(ft);
}
