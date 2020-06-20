#include <stdio.h>

void main()
{
	int n, num, d, sum = 0;

	printf("\nEnter any number:");
	scanf("%d", &n);
	num = n;
	while (n != 0)
	{
		d = n % 10;
		sum = sum + pow(d, 3);
		n = n / 10;
	}
	if (sum == num)
		printf("The number  %d is a ArmStrong's number", num);
	else
		printf("The number  %d is  Not a ArmStrong's number", num);
}
