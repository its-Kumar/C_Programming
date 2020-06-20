//program to understand the working of fwrite()

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct record
    {
        char name[20];
        int roll;
        int marks;
    } student;
    FILE *fp;
    int i, n;
    fp = fopen("stu", "wb");
    if (fp == NULL)
    {
        printf("Error in openning file\n");
        exit(1);
    }
    printf("Enter the number of the records : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", student.name);
        printf("Enter roll no : ");
        scanf("%d", &student.roll);
        printf("Enter marks: ");
        scanf("%d", &student.marks);
        fwrite(&student, sizeof(student), 1, fp);
    }
    fclose(fp);
    return 0;
}
