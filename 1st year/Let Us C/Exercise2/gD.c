#include <stdio.h>

int main(){
	int days;
	printf("Enter the no. of days the member is late to return the book. ");
	scanf("%d",&days);
	
	if(days<=5){
		printf("\nyou must pay 50 paisa fine.......");
	}
	else if(days>=6&&days<=10){
		printf("\nYou must pay 1 rupee fine..........");
	}
	else if(days>=10&&days<=30){
		printf("\nyou must pay 5 rupee fine.........");
	}
	else if(days>=30){
		printf("\nYour membership is cancelled.");
	}
	getch();
}
