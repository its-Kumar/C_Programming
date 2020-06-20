#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int i, c = 0, n;
	printf("\n enter any integer:");
	scanf("%d", &n);
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			c = 1;
			break;
		}
	}
	if (c == 0)
		printf("%d is a prime number", n);
	else
		printf("%d is not a prime number", n);
	getch();
}
