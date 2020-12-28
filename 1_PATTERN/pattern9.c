/*
Enter the no of lines: 9
        9
       989
      98789
     9876789
    987656789
   98765456789
  9876543456789
 987654323456789
98765432123456789
*/

#include <stdio.h>

void main()
{
	int i, j, n, p;

	printf("Enter the no of lines: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		p = n;
		for (j = 1; j <= i; j++)
			printf("%d", p--);
		p = p + 2;
		for (j = 1; j <= i - 1; j++)
			printf("%d", p++);
		printf("\n");
	}
}
