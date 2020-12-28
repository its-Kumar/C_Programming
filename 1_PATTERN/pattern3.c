/*
Enter the no of lines: 5
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

#include <stdio.h>

void main()
{
	int i, j, n;

	printf("Enter the no of lines: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", n + 1 - j);
		}
		printf("\n");
	}
}
