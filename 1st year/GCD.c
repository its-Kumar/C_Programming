 #include<stdio.h>
 
 void main(){
 	void fun_gcd(unsigned int,unsigned int);
	unsigned int j,k;
 	
 	printf("Enter two numbers:\n");
 	scanf("%u%u",&j,&k);
 	fun_gcd(j,k);
 }
 
void fun_gcd(unsigned int a,unsigned int b){
 	unsigned int d,r;
 	d=a/b;
 	r=a-d*b;
 	a=b;
 	if(r==0)
 	printf("Greatest Common Divisor =%d", b);
 	else{
 		b=r;
 		fun_gcd(a,b);
	 }
 }
 
