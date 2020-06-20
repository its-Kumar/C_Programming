#include <stdio.h>

void main()
{
	int a[10] = {10, 8, 9, 4, 2, 5, 7, 6, 9, 2};
	int i, j, t;
	for (i = 0; i < 9; i++)
	{
		j = 0;
		while (j < 9 - i)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
			j++;
		}
	}
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
}
