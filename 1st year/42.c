#include <stdio.h>
#include <conio.h>

void main()
{
	int n, i, s = 0;
	int fac(int);
	printf("\n Enter the value of n:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		s = s + fac(i);
	printf("\n Sum of series is = %d", s);
}
int fac(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * fac(n - 1));
}
