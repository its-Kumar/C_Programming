#include <stdio.h>

void calculate(float *s1, float *s2, float *s3, float *s4, float *s5, float *sum, float *avg)
{
	*sum = (*s1 + *s2 + *s3 + *s4 + *s5);
	*avg = *(sum) / 5.0;
}

void main()
{
	float s1, s2, s3, s4, s5;
	float sum, average;

	printf("Enter the marks in five subjects:\n\n");
	scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
	calculate(&s1, &s2, &s3, &s4, &s5, &sum, &average);
	printf("\nSum= %.2f", sum);
	printf("\nAverage = %.2f", average);
}
