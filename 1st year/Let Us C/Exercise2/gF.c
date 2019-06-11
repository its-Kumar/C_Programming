#include <stdio.h>

int main(){
	float a1,a2,a3;
	printf("Enter three angles of the triangle.");
	scanf("%f%f%f",&a1,&a2,&a3);
	
	if((a1+a2+a3)==180){
		if(a1==a2&&a2==a3&&a3==a1){
			printf("\nThe triangle is equilateral.");
		}
		else if(a1==a2||a2==a3||a3==a1){
			printf("\nTriangle is isoceles.");
		}
		else if(a1==90||a2==90||a3==90){
			printf("\nTriangle is Right angled.");
		}
		else if(a1!=a2&&a2!=a3&&a3!=a1){
			printf("\nTriangle is scalene.");
		}
	}
	else{
		printf("\nTriangle is not valid.....");
	}
	getch();
}
