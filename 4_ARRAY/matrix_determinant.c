#include <stdio.h>
int main()
{
	int a[5][5], i, j, determinant = 0;

	printf("\nEnter the values to matrix.\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nMatrix you entered is:\n\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", a[i][j]);
		}
		if (j <= 5)
			printf("\n\n");
	}

	for (i = 0; i < 5; i++)
	{
		determinant = determinant + (a[0][i] * (a[1][(i + 1) % 5] * a[2][(i + 2) % 5] - a[1][(i + 2) % 5] * a[2][(i + 1) % 5]));
	}
	printf("\nDeterminant of the matrix is: %d", determinant);

	return 0;
}
