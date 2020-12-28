/*
 A  B  C  D  E  F  G  F  E  D  C  B  A
 A  B  C  D  E  F      F  E  D  C  B  A
 A  B  C  D  E              E  D  C  B  A
 A  B  C  D                      D  C  B  A
 A  B  C                               C  B  A
 A  B                                       B  A
 A                                               A
*/
#include <stdio.h>

void main()
{
	char c1, c2;
	int n = 7, i, j, k, l;
	for (i = 1; i <= 7; i++)
	{
		c1 = 'A';
		for (j = 1; j <= n; j++)
		{
			printf("%2c ", c1++);
		}
		for (k = 0; k <= 12 - 2 * (j - 1); k++)
			printf("   ");
		c1--;
		for (l = j - 1; l >= 1; l--)
		{
			if (c1 == 'G')
				printf("\b\b\b");
			printf("%2c ", c1--);
		}
		printf("\n");
		n--;
	}
}
