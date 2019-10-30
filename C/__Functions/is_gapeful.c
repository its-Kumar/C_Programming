#include<stdio.h>
#include<math.h>

int is_gapful(int num){
    int n=num,first,last,l=0;
	while(n){
    	n /=10;
    	l++;
	}
	if(l<3)
    	return 0;
    first  = num / pow(10,l-1);
    last = num %10;
    n = first*10 + last;
    if(num%n==0)
    	return 1;
    else
    	return 0;
}

int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(is_gapful(n))
        printf("Number is gapful\n");
    else 
        printf("Number is not gapful\n");

return 0;
}
