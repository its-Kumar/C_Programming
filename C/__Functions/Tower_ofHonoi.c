//problem of The Tower Of Honoi

#include<stdio.h>
void THANOI(int no_disk,char source_tower,char auxilary_tower,char target_tower)
{
  static int count=0;
  if(no_disk == 1)
    printf("\n %d. %c -> %c", ++count, source_tower, target_tower);
  else{
    THANOI(no_disk -1,source_tower,target_tower,auxilary_tower);
    printf("\n %d. %c -> %c", ++count, source_tower, target_tower);
    THANOI(no_disk -1, auxilary_tower,source_tower,target_tower);
}
}
void main(){
  int n;
  char source_tower='A',auxilary_tower='B',target_tower='C';
  printf("Enter the no of disks:\n");
  scanf("%d",&n);
  THANOI(n,source_tower,auxilary_tower,target_tower);
}
