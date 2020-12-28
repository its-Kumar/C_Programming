#include <stdio.h>

void main()
{
	int n;
	void prime_fac(int);
	printf("Enter a number:\n");
	scanf("%d", &n);
	prime_fac(n);
}

void prime_fac(int n)
{
	int i, k;
	k = n;
	for (i = 2; i <= k; i++)
	{
		if (k % i == 0)
		{

			printf("%d, ", i);
			k = k / i;
			i = 1;
		}
	}
}
