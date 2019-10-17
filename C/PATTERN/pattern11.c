#include<stdio.h>

void main(){
	int i,j,n;
	
	printf("Enter the no of lines: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<=2*(n-i) +1 ;j++)
			printf("%d", n+1-i);
		printf("\n");
	}
}
/// OUTPUT ///
/*
Enter the no of lines: 5
 555555555
  4444444
   33333
    222
     1
*/
