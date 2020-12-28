// area of rectangle
#include <stdio.h>

void main()
{
	float area(float, float);
	float lenght, width;
	printf("Enter the length and width:\n");
	scanf("%f%f", &lenght, &width);
	printf("\nArea = %.4f", area(lenght, width));
}

float area(float a, float b)
{
	float area;
	area = a * b;
	return (area);
}
