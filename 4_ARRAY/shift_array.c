#include <stdio.h>
void shift_left(int arr[], int n)
{
    int i, temp;

    temp = arr[0];
    for (i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void shift_right(int arr[], int n)
{
    int i, temp;

    temp = arr[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
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
    //shift_left(array,n);
    shift_right(array, n);
    printf("After shift : \n");
    for (i = 0; i < n; i++)
        printf("%4d", array[i]);
    printf("\n");

    return 0;
}
