#include <stdio.h>
#include <conio.h>
struct IT
{
	int roll;
	char name[20];
	float per;
} s[10];
void main()
{

	void input();
	void display();

	printf("Enter Roll no, Name, Marks%:\n");
	input();
	printf("\n your data is:\n");
	display();
}
void input()
{
	int i;
	for (i = 0; i <= 2; i++)
	{
		scanf("%d%s%f", &s[i].roll, s[i].name, &s[i].per);
	}
}
void display()
{
	int i;

	for (i = 0; i <= 2; i++)
	{
		printf("\nRoll=%d Name:%s\ per=%f", s[i].roll, s[i].name, s[i].per);
		printf("name");
		if (s[i].roll % 2 == 0)
			printf("\n Nmae=%s", s[i].name);
	}
}
