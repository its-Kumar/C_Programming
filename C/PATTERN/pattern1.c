#include<stdio.h>

void main(){
	int i,j,n;
	
	printf("Enter the no of lines: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i+j);
		}
		printf("\n");
	}
}
//// OUTPUT ////
/*
Enter the no of lines: 5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
