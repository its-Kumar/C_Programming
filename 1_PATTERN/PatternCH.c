////////////////////// OUTPUT //////////////////////////////
/*
Enter the number of row:-5
 /  *  *  *  /
 *  /  *  /  *
 *  *  /  *  *
 *  /  *  /  *
 /  *  *  *  /

 Enter the number of row:-7
 /  *  *  *  *  *  /
 *  /  *  *  *  /  *
 *  *  /  *  /  *  *
 *  *  *  /  *  *  *
 *  *  /  *  /  *  *
 *  /  *  *  *  /  *
 /  *  *  *  *  *  /

 */

#include <stdio.h>

void main()
{
	int n, i, j;
	printf("Enter the number of row:-");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j == i || j == (n - i + 1))
				printf(" / ");
			else
				printf(" * ");
		}
		printf("\n");
	}
}
