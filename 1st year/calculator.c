#include <stdio.h>
void main()
{
	int x, y, a, b;
	printf("Enter The two Integer\n");
	scanf("%d%d", &a, &b);
	printf("1.ADD \n2.SUB\n3.MUL\n4.DIV\n5.EXIT\n");
	printf("choose your choice (1-5)\n");
	scanf("%d", &x);
	switch (x)
	{
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
		printf("Illeagel Choice");
		getch();
		exit(0);
	}
	printf("Result=%d", y);
}
