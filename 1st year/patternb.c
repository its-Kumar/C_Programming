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
