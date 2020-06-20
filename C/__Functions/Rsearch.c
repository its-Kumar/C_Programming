#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void search(int *, int, int);
int item;
void main()
{
	int a[30], n;
	int i;
	printf("Enter the no of elements:\n");
	scanf("%d", &n);
	printf("Enter Elements:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Array is:-\n");
	for (i = 0; i < n; i++)
		printf("  %d", a[i]);
	printf("\nenter the item you want to search:\n");
	scanf("%d", &item);
	search(a, n, item);
}
void search(int *a, int n, int item)
{
	static int i = 0;
	if (*(a + i) == item)
	{
		printf("Bhadhai ho....\nMil gaya.......\nAt Index number %d", i);
		exit(0);
	}
	else if (i == n)
	{
		printf("Sorry...\nNai mila bhai.....");
		exit(0);
	}
	i++;
	search(a, n, item);
}
