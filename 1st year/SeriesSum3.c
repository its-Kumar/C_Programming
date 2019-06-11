#include<stdio.h>

void main(){
	int sum=0,i,x,n,t,sign=1,term;
	
	printf("F(x)=x^1 -x^3 +x^5 -x^7 +.....................................n terms.\n");
	printf("Enetr the values of x and n:\n");
	scanf("%d%d",&x,&n);

	for(i=1;i<=n;i+=2){
		term=pow(x,t);
		sum+=sign*term;
		sign*=-1;
		
	}
	printf("The sum of the series = %d",sum);
		
}
