#include <stdio.h>

void add(int[][20], int[][20], int, int);
void main()
{
	int i, j, k, r, c;
	int A[20][20], B[20][20];
	printf("Enter the no of rows and columns for Matrices:");
	scanf("%d%d", &r, &c);
	printf("Enter the elements Matrix1:\n");
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &A[i][j]);
	printf("Matrix 1 is:\n\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("\t%d", A[i][j]);
		printf("\n");
	}
	printf("Enter the elements Matrix2:\n");
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &B[i][j]);
	printf("Matrix 2 is:\n\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("\t%d", B[i][j]);
		printf("\n");
	}
	add(A, B, r, c);
}
void add(int a[][20], int b[][20], int r, int c)
{
	int i, j;
	int sum[20][20];
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			sum[i][j] = a[i][j] + b[i][j];

	printf("\n\nResultant Matrix:\n\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("\t%d", sum[i][j]);
		printf("\n");
	}
}
