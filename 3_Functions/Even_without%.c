#include <stdio.h>

int isEven(int n)
{
	if (n & 1)
		return 0;
	return 1;
}
int main(void)
{
	int num;

	printf("Enter any number : ");
	scanf("%d", &num);
	if (isEven(num))
		printf("%d is Even\n", num);
	else
		printf("%d is Odd\n", num);
	return 0;
}
