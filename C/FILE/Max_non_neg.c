#include<stdio.h>

int main(void){
	int arr[50],sub1[50],sub2[50];
	int i,n,j,n1,n2,sum1=0,sum2=0;
	
	printf("Enter the size : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("The array is : \n");
	for(i=0; i<n; i++)
		printf("%d  ", arr[i]);
	j=0;
	for (i=0; i<n; i++){
		if(arr[i] > 0){
			sub1[i]=arr[i];
		}
		else{
			n1=i;
			break;
		}
	}
	for(;i<n;i++){
		if(arr[i] > 0){
			
			sub2[j++]=arr[i];
		}
	}
	n2=j;
	for(i=0;i<n1;i++)
		sum1+=sub1[i];
	for(i=0;i<n2;i++)
		sum2+=sub2[i];
	printf("\nMax Non Neg Array is : \n");
	if(sum1 > sum2){
		for(i=0;i<n1;i++)
			printf("%d  ",sub1[i]);
	}
	if(sum1 == sum2){
		if(n1 > n2)
			for(i=0;i<n1;i++)
				printf("%d  ",sub1[i]);
		else
			for(i=0;i<n2;i++)
				printf("%d  ",sub2[i]);	
	}
	else{
		for(i=0;i<n2;i++)
			printf("%d  ",sub2[i]);
	}
}
