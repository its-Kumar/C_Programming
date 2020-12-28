#include <stdio.h>
void main()
{
	int n;
	void prime_fac(int);
	printf("Enter a number:\n");
	scanf("%d", &n);
	printf("Prime Factors are:\n\n");
	prime_fac(n);
}

void prime_fac(int n)
{
	static int i = 2;

	if (n % i == 0)
	{
		printf("%d  ", i);
		n = n / i;
		prime_fac(n);
	}
	else
	{
		if (n != 1)
		{
			i++;
			prime_fac(n);
		}
		else
			exit(0);
	}
}
