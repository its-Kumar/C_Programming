#include <stdio.h>
#include <stdlib.h>

void del(int[], int);
void insert(int[], int);
int main()
{
	int a[50], i, n, ch;

	printf("Enter the no of Elements(n):\n");
	scanf("%d", &n);
	printf("Enter the Elements:\n ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Array is:\n");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);

	printf("\nMenu\n1.Insert an element\n2.Delete an Element\n3.exit");
	printf("\nEnter your choice:\n");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		insert(a, n);
		break;
	case 2:
		del(a, n);
		break;
	case 3:
		exit(0);
	default:
		printf("Incorrect Choice....!!");
	}
}
void insert(int a[50], int n)
{
	int i, k;
	int item;
	if (n == 50)
	{
		printf("\nError:Overflow..!!");
		exit(0);
	}
	printf("Enter the index no of the Element:\n");
	scanf("%d", &k);
	if (k < 0 || k > n)
	{
		printf("\nError:Index is not valid...!!");
		exit(0);
	}
	printf("Enter the value you want to insert:");
	scanf("%d", &item);
	for (i = n; i >= k; i--)
	{
		a[i + 1] = a[i];
	}
	n = n + 1;
	a[k] = item;
	printf("After Insertion:\nArray:-");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
}
void del(int a[50], int n)
{
	int i, k;
	int item;
	if (n == 0)
	{
		printf("\nError:Underflow..!!");
		exit(0);
	}
	printf("Enter the index no of the Element:\n");
	scanf("%d", &k);
	if (k < 0 || k > n)
	{
		printf("\nError:Index is not valid...!!");
		exit(0);
	}
	for (i = k; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n = n - 1;

	printf("After Deletetion:\nArray:-");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
}
