#include <stdio.h>

int main()
{
	int a[25], i, j = 0;
	int odd = 0, even = 0, neg = 0, pos = 0;

	printf("Enter twenty-five numbers\n");
	for (i = 0; i < 25; i++)
	{
		printf("Enter %d number:", ++j);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 25; i++)
	{
		if (a[i] >= 0)
			pos++;
		else
			neg++;
		if (a[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("\nPositive : %d", pos);
	printf("\nNegative :%d", neg);
	printf("\nEven :%d", even);
	printf("\nOdd :%d", odd);
	return 0;
}
