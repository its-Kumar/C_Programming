#include <stdio.h>

void main()
{
	int i, j, k, l, m, n;
	int flage = 0;
	printf("Enter the limit:");
	scanf("%d", &l);

	for (i = 1; i <= l; i++)
	{
		for (j = 1; j <= l; j++)
		{
			if (l == (i * i * i) + (j * j * j))
			{
				flage++;
			}
		}
	}
	if (flage == 2)
		printf(" %d is a ramanujan number", l);
	else
		printf(" %d is not a ramanujan number", l);
}
