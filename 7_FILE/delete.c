//program to delete the record in a file

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
    FILE *fp, *fptmp;
    char name[20];
    unsigned flag = 0;

    fp = fopen("stu", "rb");
    if (fp == NULL)
    {
        printf("Error in openning file\n");
        exit(1);
    }
    printf("Enter the name  of student whose record is to be deleted : ");
    scanf("%s", name);
    fptmp = fopen("tempfile", "wb");
    while (fread(&student, sizeof(student), 1, fp) == 1)
    {
        if (strcmp(name, student.name) != 0)
            fwrite(&student, sizeof(student), 1, fptmp);
        else
            flag = 1;
    }
    fclose(fp);
    fclose(fptmp);
    remove("stu");
    rename("tempfile", "stu");
    if (flag == 0)
        printf("Name not found in file\n");
    else
        printf("Record Deleted........\n");
    return 0;
}
