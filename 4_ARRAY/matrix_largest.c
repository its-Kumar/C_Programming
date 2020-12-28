#include <stdio.h>

int main()
{
	int i, j;
	int a[5][5];

	printf("Enter numbers to Matrix.");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nmatrix you entred is:\n\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[0][0] < a[i][j])
				a[0][0] = a[i][j];
		}
	}
	printf("\n\nThe Largest Number is:%d", a[0][0]);
	return 0;
}
