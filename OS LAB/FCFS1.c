//To impleament FCFS (first come first service) CPU scheduling

#include<stdio.h>
#include<stdlib.h>

struct data{
    int id,at,bt,wt,tat,ct;
};
struct data *process=NULL;

void create_data(int n){
    //this function create the processes

    int i;
    process=(struct data *)calloc(n,sizeof(struct data));

    for (i=0; i<n; i++){
        printf("\nEnter the data --->\n");
        printf("Enter process id : ");
        scanf("%d",&process[i].id);
        printf("Enter Arrival Time : ");
        scanf("%d", &process[i].at);
        printf("Enter Burst Time : ");
        scanf("%d",&process[i].bt);
    }
}
void sort_at(int n){
    //this function sort the processes according to their arrival time
    int i,j,min;
    struct data tmp;

    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(process[i].at > process[j].at)
                min=j;
        }
        if(i!=j){
        tmp=process[i];
        process[i]=process[min];
        process[min]=tmp;
        }
    }
}
void assign_data(int n){
    //this function calculate and assign the waiting time,turnaround time etc.
    int i;
    sort_at(n);
    for(i=0; i<n; i++){
        if(i==0){
            process[i].wt = 0;
            process[i].ct = process[i].at + process[i].bt;
            process[i].tat = process[i].ct - process[i].at;
        }
        else{
            process[i].ct = process[i-1].ct + process[i].bt;
            process[i].tat = process[i].ct - process[i].at;
            process[i].wt = process[i].tat - process[i].bt;
        }
    }
}
void display(int n){
    //this function display the data of processes and avg. waiting time , CPU utilization etc.
    
    int i,avg_wt=0,avg_tat=0,ct=0,total_bt=0;
    float cpu_utl=0;
    printf("\nP Id\t Arrival Time\tBurst Time\tWaiting Time\tTurnaround Time\tCompletion Time\n");

    for(i=0; i<n; i++){
        printf("\n%d\t\t",process[i].id);
        printf("%d\t\t",process[i].at);
        printf("%d\t\t",process[i].bt);
        printf("%d\t\t",process[i].wt);
        printf("%d\t\t",process[i].tat);
        printf("%d\t\t",process[i].ct);

        avg_wt += process[i].wt;
        avg_tat += process[i].tat;
        total_bt +=process[i].bt;
        ct = process[i].ct;
    }
    cpu_utl = ((float)total_bt/(float)ct)*100;

    printf("\n\n\nAverage Turnaround Time : %.2f",(float)avg_tat/n);
    printf("\n\nAverage Waiting Time : %.2f",(float)avg_wt/n);
    printf("\n\nThroughput : %.2f", (float)n/(float)ct);
    printf("\n\nCPU Utilization : %.2f",cpu_utl);
    printf("\n\nCPU Idealness : %.2f",(100-cpu_utl));
}
int main(void){
    int n;

    printf("Enter the no of process : ");
    scanf("%d", &n);
    create_data(n);
    assign_data(n);
    display(n);
    return 0;
}
