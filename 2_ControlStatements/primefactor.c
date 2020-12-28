#include <stdio.h>
void main()
{
	int n, i, k;
	printf("\n Enter the Number:-");
	scanf("%d", &n);
	k = n;

	printf("The prime factors:\n");
	for (i = 2; i <= k; i++)
	{
		if (k % i == 0)
		{
			printf("  %d", i);
			k = k / i;
			i = 1;
		}
	}
	return 0;
}
