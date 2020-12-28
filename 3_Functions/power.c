#include <stdio.h>

double power(double, int);
int main(void)
{
	double a;
	int n;
	printf("Enter base : ");
	scanf("%lf", &a);
	printf("Enter exponent : ");
	scanf("%d", &n);
	printf("%.3lf raised to power %d is %.3lf\n", a, n, power(a, n));
	return 0;
}
double power(double a, int n)
{
	int i;
	double p = 1;
	if (n == 0)
		return 1;
	else
	{
		for (i = 1; i <= abs(n); i++)
			p = p * a;
		if (n > 0)
			return p;
		else
			return 1 / p;
	}
}
