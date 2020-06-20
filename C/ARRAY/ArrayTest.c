#include <stdio.h>
#include <conio.h>

int b_search(int[], int, int, int);
void main()
{
    int a[10];
    int i, result = 0, item;
    printf("enter elements to array:");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("Array is:\n");
    for (i = 0; i < 10; i++)
        printf("%d\t", a[i]);
    printf("\nEnter item to search:");
    scanf("%d", &item);
    result = b_search(a, 0, 9, item);
    if (result == 1)
        printf("\nSearch Successfull.....");
    else
        printf("\nSearch Unsuccessfull.....");
}

int b_search(int a[], int beg, int end, int item)
{

    int mid;
    mid = (beg + end) / 2;

    while ((beg < end) && a[mid] != item)
    {
        if (item > a[mid])
            beg = mid + 1;
        else
            end = mid - 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == item)
        return (1);
    else
        return (0);
}
