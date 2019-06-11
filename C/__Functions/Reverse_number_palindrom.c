#include<stdio.h>

int isPalindrome(long int);
long int reverse(long int);
int main(void){
	int num;
	printf("Enter a number : ");
	scanf("%ld", &num);
	printf("Reverse  : %ld \n", reverse(num));
	if(isPalindrome(num))
		printf("Number is palindrome..");
	else
		printf("Number is not palindrome..");
}
int isPalindrome(long int n){
	if(n == reverse(n))
		return 1;
	return 0;		
}

long int reverse(long int n){
	long int rev=0;
	do{
		rev=rev*10 + n%10;
		n/=10;
	}while(n>0);
	return rev;
}
