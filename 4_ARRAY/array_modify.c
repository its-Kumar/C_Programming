#include <stdio.h>

int modify(int *ptr)
{
	int i;
	for (i = 0; i < 10; ++i)
		ptr[i] *= 3;
}
int main()
{
	int i;
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("\nBefore Modify:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	modify(a);
	printf("\nAfter Modify:");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
}
