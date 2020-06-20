#include <stdio.h>
void main()
{
	int c, f;
	printf("Enter the class obtained \n");
	scanf("%d", &c);
	printf("No. of subjects(Failed):\n");
	scanf("%d", &f);

	switch (c)
	{
	case 1:
		if (f <= 3)
			printf("Student get grace of 5 Marks/subject...");
		else
			printf("Student get No grace");
		break;
	case 2:
		if (f <= 2)
			printf("Student get grace of 4 Marks/subject...");
		else
			printf("Student get No grace");
		break;
	case 3:
		if (f <= 1)
			printf("Student get grace of 5 Marks/subject...");
		else
			printf("Student get No grace");
		break;
	}
}
