#include<stdio.h>

long int binary(int);
int main(void){
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Decimal = %d\nBinary = %ld", num, binary(num));
	return 0;
}
long int binary(int n){
	long a=1,bin=0,rem;
	
	while(n>0){
		rem=n%2;
		bin=bin + rem*a;
		n/=2;
		a*=10;
	}
	return bin;
}
