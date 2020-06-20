#include <stdio.h>

void main()
{
	int i, j, k, l;

	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
			printf("	%d", j);
		for (k = 0; k <= 2 * i - 1; k++)
			printf("	");
		for (l = 7 - i; l >= 1; l--)
			if (l != 7)
				printf("	%d", l);
		printf("\n");
	}
}
