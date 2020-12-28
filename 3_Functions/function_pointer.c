//program of function pointer in c

#include <stdio.h>

int add(int, int);
int mul(int, int);
int sub(int, int);
int div(int, int);

void main()
{
	int choice, x, y, result = 0;
	int (*funptr[4])(int, int);
	funptr[0] = add;
	funptr[2] = sub;
	funptr[1] = mul;
	funptr[3] = div;

	printf("\nEnter two numbers: ");
	scanf("%d %d", &x, &y);
	printf("\nEnter 0 for 'add' 1 for 'mul' 2 for 'sub' and 3 for 'div': ");
	scanf("%d", &choice);

	result = funptr[choice](x, y);
	printf("\nResult = %d .", result);

	return 0;
}
int add(int x, int y)
{
	return (x + y);
}
int mul(int x, int y)
{
	return (x * y);
}
int sub(int x, int y)
{
	return (x - y);
}
int div(int x, int y)
{
	return (x / y);
}
