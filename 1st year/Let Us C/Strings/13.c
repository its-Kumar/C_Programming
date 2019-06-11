//A look-alike of the function strlen()
#include<stdio.h>

main()
{
	float r,a;
	const float pi=3.14;
	
	printf("\nEnter radius of circle:");
	scanf("%f", &r);
	a=pi*r*r;
	printf("\nArea of circle = %f", a);
}
