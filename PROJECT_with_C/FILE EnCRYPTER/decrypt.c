#include <stdio.h>

void decrypt()
{
	char c;
	FILE *fs = NULL, *ft = NULL;
	remove("decrypt.txt");

	fs = fopen("encrypt.txt", "r");
	ft = fopen("decrypt.txt", "w");
	if (ft == NULL || fs == NULL)
	{
		printf("Error in decrypting file..!!\n\n");
		return;
	}
	while (1)
	{
		c = fgetc(fs);
		if (c == EOF)
			break;
		c = ~c;
		fputc(c, ft);
	}
	fclose(fs);
	fclose(ft);
	printf("Goto file: decrypt.txt\n\n");
}
