#include <stdio.h>
void main()
{
	int a, b, sum;
	int SUM(int, int);
	printf("Enter two Integer\n");
	scanf("%d%d", &a, &b);
	sum = SUM(a, b);
	printf("result=%d", sum);
	getch();
}
int SUM(int x, int y)
{
	int z;
	z = x + y;
	return (z);
}
