#include <stdio.h>
int count_1(long b)
{
	int count = 0, rem = 0;
	while (b != 0)
	{
		rem = b % 10;
		b = b / 10;
		if (rem & 1)
			count++;
	}
	return count;
}
int main(void)
{
	long b;

	printf("Enter bit squence : ");
	scanf("%ld", &b);

	printf("No of 1 in bit squence (%ld) : %d ", b, count_1(b));

	return 0;
}
