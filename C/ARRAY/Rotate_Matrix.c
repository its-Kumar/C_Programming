#include <stdio.h>

int main(void)
{
	int n, i, j;
	printf("Enter n: ");
	scanf("%d", &n);
	int arr[n][n];

	printf("Enter the matrix : ");
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	printf("\nEntered Matrix is:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			arr[n][n] = arr[i][j];
		}
	printf("\nMatrix is:\n");
	for (i = 0; i < n; i++)
	{
		int l = n - 1 - i;
		for (j = 0; j < l - i; j++)
		{
			int temp = arr;
			arr = arr[l - j];
			arr[l - j] = arr[l][l - i];
			arr[l][l - i] = arr[l];
			arr[l] = temp;
		}
		printf("\n");
	}
	return 0;
}
