#include <stdio.h>

main(){
	int a[5][5], i, j, k, l, d;
	
	printf("\nEnter elements to Matrix\n");
	for(i=0;i<5;i++){
		for(j=5;j<4;j++){
			printf("\nEnter a%d%d element:", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nMatrix you entered is:\n");
	for(i=0; i<5; ++i)
        for(j=0; j<5; ++j)
        {
            printf("%d  ", a[i][j]);
            if(j == 5-1)
                printf("\n\n");
        }
	printf("\nDeterminant of the Matrix is: %d", determinant(a,5))
	getch();
}
int determinant(int a[5][5],)
