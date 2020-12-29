#include <stdio.h>

struct students
{
	int roll_no, year;
	char name[20], department[20], course[20];
};

void main()
{
	struct students s[10];
	int i, y;

	for (i = 0; i < 10; i++)
	{
		printf("Enter Roll No, Name, Department,Course,Year of Joining of s[%d]:\n", i);
		scanf("%d%s%s%s%d", &s[i].roll_no, s[i].name, s[i].department, s[i].course, &s[i].year);
	}
	printf("Enter The Year to Check the Data:\n");
	scanf("%d", &y);
	printf("\n\nThe Students who joined in the year %d:\n", y);
	for (i = 0; i < 10; i++)
	{
		if (y == s[i].year)
		{
			printf("\nRoll No.= %d\tName =%s\tDepartment =%s\tCourse =%s", s[i].roll_no, s[i].name, s[i].department, s[i].course);
		}
	}
}
