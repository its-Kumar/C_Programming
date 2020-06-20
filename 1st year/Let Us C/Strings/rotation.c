#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	char s[20];
	int i, j, k;

	printf("\nEnter a string:\t");
	scanf("%s", s);
	printf("\nThe Rotations of String are:\n");
	for (i = 0; i < strlen(s); i++)
	{
		printf("\n");
		for (j = i + 1; j < strlen(s); j++)
			printf("%c", s[j]);
		for (k = 0; k <= i; k++)
			printf("%c", s[k]);
	}

	getch();
}
