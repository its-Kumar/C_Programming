#include<stdio.h>

void main(){
	int x,y,res,i;
	
	printf("Enter the values of base and power(x,y):");
	scanf("%d%d",&x,&y);
	res=x;
	for(i=1;i<y;i++){
		res=res*x;
	}
	printf("Result = %d",res);
	getch();
}
