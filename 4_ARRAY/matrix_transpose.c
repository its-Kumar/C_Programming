#include <stdio.h>

int main()
{
	int i, j;
	int a[4][4];

	printf("Enter numbers to Matrix.");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nmatrix you entred is:\n\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe Transpose of matrix is:\n\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
