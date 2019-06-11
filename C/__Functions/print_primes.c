#include<stdio.h>
#include<math.h>

void printPrimes(long int ,long int);
int isPrime(long int);

int main(void){
	long int num1,num2;
	
	printf("Enter two numbers : ");
	scanf("%ld%ld", &num1, &num2);
	
	printf("Prime Numbers between %ld and %ld : \n",num1,num2);
	printPrimes(num1, num2);
	return 0;
}
void printPrimes(long int n1,long int n2){
	int i;
	
	for(i=n1;i<=n2;i++)
		if(isPrime(i))
			printf("%d ", i);
}
int isPrime(long int n){
	int i;
	
	for(i=2;i<sqrt(n);i++)
		if(n%i == 0)
			return 0;
	return 1;
}
