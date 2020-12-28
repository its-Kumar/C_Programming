#include <stdio.h>
#include <math.h>

void main()
{
	int i;
	float x, term, sum = 0;
	printf("Enter the value of X:");
	scanf("%f", &x);
	for (i = 1; i <= 7; i++)
	{
		term = pow((x - 1) / x, i) / i;
		sum = sum + term;
	}
	printf("log x = %f", sum);
}
