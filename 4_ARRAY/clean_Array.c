#include<stdio.h>
#include<stdlib.h>
int sum_dig(int n){
    int s=0, num = n;
    while(num != 0){
        s += num%10;
        num /= 10;
    }
    return s;
}

int rule1(int *arr, int n){
    // Rule 1
    int p =0, tmp[10];
    for(int i=0; i<n; i++){
        int f=0;
        for(int j=i; j< n; j++){
            if((i!=j) && (arr[i] == arr[j]))
                {f =1;
                break;}
        }
        if(f==0)
            tmp[p++] = arr[i];
    }
    n = p;
    for(int i=0; i<n; i++)
        arr[i] = tmp[i];
    return n;
}
int rule2(int arr[], int n){
    // Rule 2
    for(int i=0; i<n; i++){
        while(arr[i] > 9)
            arr[i] = sum_dig(arr[i]);
    }
    return n;
}
int rule3(int arr[], int n){
    // Rule 3
    int p = 0, tmp[10];
    for(int i=0; i<n; i++){
        if(arr[i] != 0)
            tmp[p++] = arr[i];
    }
    n = p;
    for(int i=0; i<n; i++)
        arr[i] = tmp[i];
    return n;
}
int  rule4(int arr[], int n){
    // Rule 4
    int p = 0, tmp[10];
    for(int i=0; i<n; i++){
        int f =0;
        for(int j=0; j<n; j++){
            for(int k=j+1; k<n; k++)
                if(arr[i] == arr[j] + arr[k]){
                    f =1;
                    break;
                }
        }
        if(f==0)
            tmp[p++] = arr[i];   
    }
    n = p;
    for(int i=0; i<n; i++)
        arr[i] = tmp[i];
    return n;
}

int rule5(int arr[], int n){
    int p =0, tmp[10];
    for(int i=0; i<n; i++){
        int f =0;
        for(int j=0; j<n; j++){
            if((i != j) && (arr[i] == arr[j] * arr[j])){
                f = 1;
                break;
            }
        }
        if(f ==0)
            tmp[p++] = arr[i];
    }
    n = p;
    for(int i=0; i<n; i++)
        arr[i] = tmp[i];
    return n;
}

void arrayCleanup(int input1[],int n){
    int new_arr[10],tmp[10];
    n = rule1(input1, n);
    n = rule2(input1, n);
    n = rule3(input1, n);
    n = rule4(input1, n);
    n = rule5(input1, n);
    
    printf("\n");
    for(int i=0; i<n; i++)
        printf("%5d", input1[i]);
}

int main(void){
    int n, input1[10];
    printf("Enter no of elements: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &input1[i]);
    for(int i=0; i<n; i++)
        printf("%5d", input1[i]);
    arrayCleanup(input1, n);
    return 0;
}
