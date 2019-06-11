#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void gotoxy(int x,int y){
	/*function for setting a coodinate */
	
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main(void){
	char name[25];
	HANDLE hConsole;
	int k=10; // k is the value of color between 0 to 255
	
	printf("Enter your name : ");
	gets(name);
	gotoxy(20,10);		//set the pointer to a specific coordinate
	hConsole =GetStdHandle(STD_OUTPUT_HANDLE);   //output handler
	SetConsoleTextAttribute(hConsole, k);		//set text attribut ie. color
	printf("%s\n", name);
	SetConsoleTextAttribute(hConsole,k=7);
	/*
	for(k=0; k<=255; k++){
		SetConsoleTextAttribute(hConsole,k);
		printf("%3d   %s\n", k, name);
	}*/
return 0;
}
