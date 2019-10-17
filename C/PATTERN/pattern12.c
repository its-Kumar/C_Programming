#include<stdio.h>

void main(){
	int i,j,n;
	
	printf("Enter the no of lines: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=2*(n-i) +1 ;j++)
			printf("%d", j);
		printf("\n");
	}
}
/*
Enter the no of lines: 5
 123456789
  1234567
   12345
    123
     1
*/
