#include <stdio.h>
#include <conio.h>
int main()
{
	int n, i, fact = 1;
	printf("enter a no=");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	printf("factorial of %d is %d", n, fact);
	getch();
}
