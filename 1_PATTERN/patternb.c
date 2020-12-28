/*
1  2  3  4  5  6  7  6  5  4  3  2  1
1  2  3  4  5  6     6  5  4  3  2  1
1  2  3  4  5           5  4  3  2  1
1  2  3  4                 4  3  2  1
1  2  3                       3  2  1
1  2                             2  1
1                                   1
*/

#include <stdio.h>
void main()
{
	int n = 7, i, j, k, l;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d  ", j);
		}
		for (k = 0; k <= 12 - 2 * (j - 1); k++)
			printf("   ");
		for (l = j - 1; l >= 1; l--)
			if (l != 7)
				printf("%d  ", l);
		printf("\n");
		n--;
	}
}
