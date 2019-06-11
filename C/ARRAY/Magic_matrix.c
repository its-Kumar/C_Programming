#include<stdio.h>
#define MAX 20

int main(void){
	int a[MAX][MAX];
	int i,j,n,num;
	
	printf("Enter n (odd value) : ");
	scanf("%d", &n);
	if(n%2 == 0){
		printf("Please, Enter odd value of n: ");
		return;
	}
	i=n-1;			//bottom row
	j=(n-1)/2;		//center column
	
	for(num=1; num<=n*n; num++ ){
		a[i][j]=num;
		i++;		//move down
		j--;		//move left
		if(num%n == 0){
			i-=2;		//one above the previous row
			j++;		//back to previous column
		}
		else if(i==n)
			i=0;		//goto top most row
		else if(j==-1)
			j=n-1;		//goto rightmost column
			
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}

