/*
 1 2 3 4 5 6     6 5 4 3 2 1
 1 2 3 4 5         5 4 3 2 1
 1 2 3 4             4 3 2 1
 1 2 3                 3 2 1
 1 2                     2 1
 1                         1
*/

#include <stdio.h>

void main()
{
	int i, j, k, l;

	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
			printf("%2d", j);
		for (k = 0; k <= 2 * i - 1; k++)
			printf("  ");
		for (l = 7 - i; l >= 1; l--)
			if (l != 7)
				printf("%2d", l);
		printf("\n");
	}
}
