#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	printf("Enter the no : ");
	scanf("%d", &n);
	if (n == 0)
		exit(0);
	while (n != 4)
	{
		if (n % 2 == 0)
		{
			printf("%d / 2 = ", n);
			n /= 2;
			printf("%d \n", n);
		}
		else
		{
			printf("%d * 3 + 1 = ", n);
			n = n * 3 + 1;
			printf("%d \n", n);
		}
	}
	printf("%d / 2 =", n);
	printf("%d\n", n /= 2);
	printf("%d / 2 =", n);
	printf("%d", n /= 2);
	return 0;
}
