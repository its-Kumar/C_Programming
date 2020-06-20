#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a, b, c;
	float S, A;
	printf("input the side of triangle a,b,c \n");
	scanf("%d%d%d", &a, &b, &c);
	S = (a + b + c) / 2.0;
	printf("the cercum of the triangle is=%f", S);
	A = sqrt(S * (S - a) * (S - b) * (S - c));
	printf("the area of the triangle is=%f", A);
	getch();
}
