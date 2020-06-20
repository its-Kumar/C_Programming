#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float a, b, c, r1, r2, D, real, image;
	printf("Enter the Coefficent (a,b,c):-\n");
	scanf("%f%f%f", &a, &b, &c);
	D = pow(b, 2) - (4 * a * c);

	if (D == 0)
	{
		r1 = (-b / 2 * a);
		printf("Root1 = Root2 = %.2f", r1);
	}
	else if (D > 0)
	{
		r1 = (-b + (sqrt(D))) / 2 * a;
		r2 = (-b - (sqrt(D))) / 2 * a;
		printf("Root1 = %.2f \nRoot2 = %.2f", r1, r2);
	}
	else
	{
		real = -b / 2 * a;
		image = (sqrt(-D)) / 2 * a;
		printf("Root1 = %.2f+%.2fi\nRoot2 = %.2f-%.2fi", real, image, real, image);
	}
}
