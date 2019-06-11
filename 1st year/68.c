#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
	int ch;
	int count=0;
	FILE *fs, *ft1, *ft2;
	fs=fopen("abc.txt","r");
	if(fs==NULL){
		printf("\nUnable to open source file......");
		getch(); exit(0);
	}
	ft1=fopen("even.txt","w");
	if(ft1==NULL){
		printf("\nUnable to open target file1......");
		getch();exit(0);
	}
	ft2=fopen("odd.txt","w");
	if(ft2==NULL){
		printf("\nUnable to open target file2......");
		getch();exit(0);
	}
	while(count<=50){
		ch=getw(fs);
		if(ch%2!=0){
			putw(ch,ft2);
		}
		else
			putw(ch,ft1);
		count++;
	}	
}
