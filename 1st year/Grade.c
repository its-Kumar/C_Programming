#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum; float i;
	printf("\n Enter the marks of five subject\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	i=(sum/5.0);
	printf("Sum of Marks=%d \n percentage=%.2f",sum,i);
	if(i>=90)
		printf("\nGrade is 'A'");
	else if(i>=80)
		printf("\nGrade is 'B'");
	else if(i>=60)
		printf("\nGrade is 'C'");
	else
		printf("\nGrade is 'D'");
	getch();	

}
