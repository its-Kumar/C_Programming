/*
Enter the no of lines: 5
 567898765
  4567654
   34543
    232
     1
*/

#include <stdio.h>

void main()
{
	int i, j, n, p;

	printf("Enter the no of lines: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf(" ");
		p = n + 1 - i;
		for (j = 1; j <= (n - i) + 1; j++)
			printf("%d", p++);
		p = p - 2;
		for (j = 1; j <= n - i; j++)
			printf("%d", p--);
		printf("\n");
	}
}
