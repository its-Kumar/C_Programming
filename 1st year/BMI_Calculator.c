//The body mass index
#include <stdio.h>
#include <math.h>

void main()
{
	float weight, height, BMI;
	printf("Enter the weight of person(in kilogrames):");
	scanf("%f", &weight);
	printf("Enter the height(in meters):");
	scanf("%f", &height);
	BMI = weight / pow(height, 2);
	printf("The BMI of the person is: %f\nAnd BMI category is:\n", BMI);
	printf("\n************************************************************\n");

	if (BMI < 15)
		printf("Starvation");
	else if (BMI >= 15.1 && BMI <= 17.5)
		printf("Anorexic");
	else if (BMI >= 17.6 && BMI <= 18.5)
		printf("Underweight");
	else if (BMI >= 18.6 && BMI <= 24.9)
		printf("Ideal");
	else if (BMI >= 25 && BMI <= 25.9)
		printf("Overweight");
	else if (BMI >= 30 && BMI <= 30.9)
		printf("Obese");
	else if (BMI >= 40)
		printf("Morbidly Obese");
	printf("\n************************************************************\n");
	getch();
}
