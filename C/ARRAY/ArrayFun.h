void b_search(int a[10], int beg=0, int end=9,int item)
{
    int mid;
    mid=(beg+end)/2;

    while((beg<end)&&a[mid]!=item)
    {
        if(item>a[mid])
            beg=mid+1;
        else
            beg=mid-1;
        mid=(beg+end)/2;
    }
    if(a[mid]==item)
        printf("\nSearch Successfull.....");
    else
        printf("\nSearch Unsuccessfull.....");
}
