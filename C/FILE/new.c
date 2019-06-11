");
        exit(1);
    }
    /program to append records to a file*
    while(choice==1)
    {
        printf("Enter name: ");
        scanf("%s",student.name);
        printf("Enter roll no : ");
        scanf("%d",&student.roll);
        printf("Enter marks: ");
        scanf("%d", &student.marks);
        fwrite(&student,sizeof(student),1,fp);
        printf("Want to enter more ?(1 for yes/ 0 for no) : ");
        scanf("%d",&choice);
    }
    fclose(fp);
    return 0;
}