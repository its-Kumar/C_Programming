#include <conio.h>
int main()
{
	int a, b, x, y;
	printf("enter any two numbar=");
	scanf("d%d", &a, &b);
	printf("\n 1. Addition \n 2. subtraction \n multi \n div \n exit");
	printf(\n enter your choice operator(1 - 5) =);
	scanf("%d", &x);
	switch (x)
	case 1:
		y = a + b;
	break;
case 2:
	y = a - b;
	break;
case 3:
	y = a * b;
	break;
case 4:
	y = a / b;
	break;
case 5:
	exit(0);
default:
	printf("\n illegal choice");
	getch();
	exit(0);
}

printf("\n result=%d", y);
getch();
}
