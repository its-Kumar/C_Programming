#include <stdio.h>

void partition(int arr[], int n)
{
    int i, j = 0;
    int temp[50];

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            temp[j++] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            temp[j++] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main(void)
{
    int array[50];
    int n, i;

    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("You have entered the following array : \n");
    for (i = 0; i < n; i++)
        printf("%4d", array[i]);
    printf("\n");

    partition(array, n);
    printf("\nAfter Partition : \n");
    for (i = 0; i < n; i++)
        printf("%4d", array[i]);
    printf("\n");

    return 0;
}
