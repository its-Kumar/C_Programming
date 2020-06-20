#include <stdio.h>
#include <math.h>

void main()
{
	int i, x, n, term, sum = 0, sign = 1;
	printf("Enter the value of X:\n");
	scanf("%d", &x);
	printf("Enter the value of n:\n");
	scanf("%d", &n);

	for (i = 1; i <= (2 * n); i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + pow(x, i) * sign;
			sign *= -1;
		}
	}
	printf("\nThe addition of first 'n' terms = %d", sum);
}
