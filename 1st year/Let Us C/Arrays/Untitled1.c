#include <stdio.h>

void dostuff(int *ptr)
{
	ptr[1] = 5;
}
int main()
{
	int a[] = {0, 1, 2};
	dostuff(a);
	printf("\n%d %d %d\n", a[0], a[1], a[2]);
}
