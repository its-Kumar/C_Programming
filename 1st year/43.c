#include <stdio.h>

void main()
{
	int a, b;
	void swap(int *, int *);
	printf("Enter the values of a and b:\n");
	scanf("%d%d", &a, &b);
	printf("\nBefore swapping a=%d and b=%d", a, b);
	swap(&a, &b);
	printf("\n\nAfter swapping a=%d and b=%d", a, b);
}
void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
