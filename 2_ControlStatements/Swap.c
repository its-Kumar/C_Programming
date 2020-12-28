//swap two numbers without using the third variable
#include <stdio.h>

void main()
{
	int n1, n2;

	printf("Enter two numbers:");
	scanf("%d%d", &n1, &n2);
	printf("\t\tBefore Swapping");
	printf("\n\tN1 = %d\n\tN2 = %d\n", n1, n2);
	printf("\t\tAfter Swapping");
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	printf("\n\tN1 = %d\n\tN2 = %d\n", n1, n2);
	getchar();
}
