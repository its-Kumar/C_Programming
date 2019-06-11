#include<stdio.h>

void main(){
	float i,x,y;
	printf("Approximate intelligence level of a person:\n");
	
	for(y=1;y<=6;y++){
		for(x=5.5;x<=12.5;x+=0.5){
			i=2+(y+0.5*x);
			printf("\nI = %.2f,	Y = %.2f,	X = %.2f",i,y,x);	
		}
	}
}
