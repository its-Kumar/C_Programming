#include <stdio.h>
#include <stdlib.h>

//file encryption utility

void encrypt();
int main()
{
	encrypt();
}

void encrypt()
{
	FILE *fs, *ft;
	char ch;
	fs = fopen("Source.c", "r");
	ft = fopen("Target.c", "w");

	if (fs == NULL || ft == NULL)
	{
		printf("\nFile opening error!");
		exit(1);
	}

	while ((ch = getc(fs)) != EOF)
		putc(~ch, ft);

	fclose(fs);
	fclose(ft);
}
