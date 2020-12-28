#include <stdio.h>
void main()
{
	int n, i, fact = 1;
	printf("Enter the number \n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	printf("factorial of %d is %d", n, fact);
}
