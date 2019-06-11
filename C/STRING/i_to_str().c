//program to convert integer to string

#include<stdio.h>
void i_to_str(int num,char str[],int base){
	int i=0,temp,rem,j,sign;
	
	sign=num<0 ? -1 : 1;
	if(sign==-1)
		num=-num;
	while(num>0){
		rem=num % base;
		num /= base;
		if(rem>9 && rem<16)
			str[i++]=rem -10 +'A';
		else
			str[i++]=rem +'0';
	}
	if(sign==-1)
		str[i++]='-';
	str[i]='\0';
	
	for(i=0,j=strlen(str)-1; i<j; i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}
void d_to_str(double num,char str[]){
	int i,k;
	double d;
	i=num;
	i_to_str(i,str,10);
	str[strlen(str)+1]= '\0';
	str[strlen(str)] ='.';
	d=num-i;
	k=d*1000000;
	if(k<0)
		k=-k;
	i_to_str(k,str+strlen(str),10);
}
int main(void){
	char str[20];
	int num;
	double d;
	
	printf("Enter any number(int) : ");
	scanf("%d",&num);
	i_to_str(num,str,10);
	puts(str);
	printf("Enter any number(double) : ");
	fflush(stdin);
	scanf("%lf",&d);
	d_to_str(d,str);
	puts(str);
}
