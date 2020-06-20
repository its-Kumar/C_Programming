#include <stdio.h>
#include <conio.h>
int main()
{
	int no;
	printf("input any no=");
	scanf("%d", &no);
	if (no % 5 == 0)
	{

		printf("it is divisible");
		printf("\n thank you");
	}
	else
	{
		printf("Not divisible");
		printf("\n thank you");
	}
	getch();
}
