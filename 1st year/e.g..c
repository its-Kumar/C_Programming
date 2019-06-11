#include<stdio.h>
#include<conio.h>
int main(){
	int c,f;
	printf("\n enter temp. in fahrenheit\n");
	scanf("%d",&f);
	c=(f-32)*(5/9);
	printf("\n temp. in celcious=%d",c);
	getch();
}
