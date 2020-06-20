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
			printf("%c  ", c1++);
		}
		for (k = 0; k <= 12 - 2 * (j - 1); k++)
			printf("   ");
		c1--;
		for (l = j - 1; l >= 1; l--)
		{

			printf("%c  ", c1--);
		}
		printf("\n");
		n--;
	}
}
