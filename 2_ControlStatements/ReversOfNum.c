#include <stdio.h>

void main()
{
	int n, d, rev = 0;

	printf("\nEnter any number:");
	scanf("%d", &n);

	while (n != 0)
	{
		d = n % 10;
		n = n / 10;
		rev = rev * 10 + d;
	}
	printf("The reverse  of the number = %d", rev);
}
