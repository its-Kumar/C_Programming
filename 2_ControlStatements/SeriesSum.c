//S=1-2+3-4+5.........................................n times

#include <stdio.h>

void main()
{
	int i, n, S = 0, sign = 1;

	printf("\nEnter the vlaue of n:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		S = S + (sign * i);
		sign = sign * (-1);
	}
	printf("\n sum S = %d", S);

	return 0;
}
