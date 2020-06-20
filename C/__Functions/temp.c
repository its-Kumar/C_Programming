#include <stdio.h>

float func1(a, b, z) int a, b;
float z;
{
	float s;
	s = (a + b) / z;
	return s;
}
int main(void)
{
	printf("%f", func1(2, 4, 1.5));
}
