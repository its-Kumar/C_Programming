#include <stdio.h>

int main(void){
	int num,rem=0;
	
	printf("Enter any number : ");
	scanf("%d", &num);
	while(num !=1){
		rem = rem + (num % 2);
		num = num / 2;
	}
	if(rem == 0)
		printf("Number is the power of two. \n");
	else
		printf("Number is not the power of two. \n");
return 0;
}
