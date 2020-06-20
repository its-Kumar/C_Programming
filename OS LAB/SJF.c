//To impleament SJF (Sortest job first) CPU scheduling
#include <stdio.h>
#include <stdlib.h>

struct data
{
    int id, at, bt, wt, tat, ct;
} process[50];

void sort_at(int n)
{
    //this function sort the processes according to their arrival time
    int i, j, xchange;
    struct data tmp;

    for (i = 0; i < n - 1; i++)
    {
        xchange = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (process[j].at > process[j + 1].at)
            {
                tmp = process[j];
                process[j] = process[j + 1];
                process[j + 1] = tmp;
                xchange++;
            }
            if (process[j].at == process[j + 1].at)
            {
                if (process[j].id > process[j + 1].id)
                {
                    tmp = process[j];
                    process[j] = process[j + 1];
                    process[j + 1] = tmp;
                }
            }
        }
        if (xchange == 0)
            break;
    }
}
void sort_bt(int n)
{
    //this function sort the processes according to their burst time
    int i, j, xchange;
    struct data tmp;

    for (i = 0; i < n - 1; i++)
    {
        xchange = 0;
        for (j = 1; j < n - i - 1; j++)
        {
            if (process[j].bt > process[j + 1].bt)
            {
                tmp = process[j];
                process[j] = process[j + 1];
                process[j + 1] = tmp;
                xchange++;
            }
            if (process[j].bt == process[j + 1].bt)
            {
                if (process[j].at > process[j + 1].at)
                {
                    tmp = process[j];
                    process[j] = process[j + 1];
                    process[j + 1] = tmp;
                }
            }
        }
        if (xchange == 0)
            break;
    }
}
void create_data(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Enter the data -->\n");
        printf("Enter the process id :");
        scanf("%d", &process[i].id);
        printf("Enter the arrival time : ");
        scanf("%d", &process[i].at);
        printf("Enter the burst time : ");
        scanf("%d", &process[i].bt);
    }
    sort_at(n);
}
void display(int n)
{
    //this function display the data of processes and avg. waiting time , CPU utilization etc.

    int i, avg_wt = 0, avg_tat = 0, ct = 0, total_bt = 0;
    float cpu_utl = 0;
    printf("\nP Id\t Arrival Time\tBurst Time\tWaiting Time\tTurnaround Time\tCompletion Time\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%d\t\t", process[i].id);
        printf("%d\t\t", process[i].at);
        printf("%d\t\t", process[i].bt);
        printf("%d\t\t", process[i].wt);
        printf("%d\t\t", process[i].tat);
        printf("%d\t\t", process[i].ct);

        avg_wt += process[i].wt;
        avg_tat += process[i].tat;
        total_bt += process[i].bt;
        ct = process[i].ct;
    }
    cpu_utl = ((float)total_bt / (float)ct) * 100;

    printf("\n\n\nAverage Turnaround Time : %.2f", (float)avg_tat / n);
    printf("\n\nAverage Waiting Time : %.2f", (float)avg_wt / n);
    printf("\n\nThroughput : %.2f", (float)n / (float)ct);
    printf("\n\nCPU Utilization : %.2f", cpu_utl);
    printf("\n\nCPU Idealness : %.2f", (100 - cpu_utl));
}
void calculation(int n)
{
    int i;
    sort_bt(n);
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            process[i].wt = 0;
            process[i].ct = process[i].at + process[i].bt;
            process[i].tat = process[i].ct - process[i].at;
        }
        else
        {
            process[i].ct = process[i - 1].ct + process[i].bt;
            process[i].tat = process[i].ct - process[i].at;
            process[i].wt = process[i].tat - process[i].bt;
        }
    }
}
int main(void)
{
    int n;

    printf("Enter the no of the process : ");
    scanf("%d", &n);
    create_data(n);
    calculation(n);
    display(n);
    return 0;
}
