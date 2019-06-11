#include<stdio.h>
#include<math.h>

int isPrime(long int);

int main(void){
	int num;
	
	printf("Enter a number : ");
	scanf("%ld", &num);
	
	if(isPrime(num))
		printf("Number is prime..");
	else
		printf("Number is not prime..");
}
int isPrime(long int n){
	int i;
	
	for(i=2;i<sqrt(n);i++)
		if(n%i == 0)
			return 0;
	return 1;
}
