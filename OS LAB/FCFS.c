//To impleament FCFS (first come first service) CPU scheduling

#include <stdio.h>
#include <stdlib.h>
struct data
{
    int id;
    int a_t;
    int b_t;
    int w_t;
    int ta_t;
    int c_t;
};
struct node
{
    struct data process;
    struct node *link;
};
typedef struct node node;
node *start = NULL;

void create_data(int n)
{
    node *tmp, *ptr = NULL;
    int i;
    for (i = 1; i <= n; i++)
    {
        tmp = (node *)malloc(sizeof(node));
        printf("Enter the data -->\n");
        printf("Enter process ID:");
        scanf("%d", &tmp->process.id);
        printf("Enter arrival time : ");
        scanf("%d", &tmp->process.a_t);
        printf("Enter burst time : ");
        scanf("%d", &tmp->process.b_t);
        if (start == NULL)
        {
            start = tmp;
            tmp->link = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->link != NULL)
                ptr = ptr->link;
            ptr->link = tmp;
            tmp->link = NULL;
        }
    }
}
void display_data()
{
    node *ptr = start;
    if (ptr == NULL)
    {
        printf("Process data doesnot present ..!!!\n");
        return;
    }
    printf("\nProcess ID:\tArrival Time:\tBurst Time:\tWaiting Time:\tTurnaround Time:\tCompletation Time:\n");
    while (ptr != NULL)
    {
        printf("\n%d", ptr->process.id);
        printf("\t\t%d", ptr->process.a_t);
        printf("\t\t%d", ptr->process.b_t);
        printf("\t\t%d", ptr->process.w_t);
        printf("\t\t%d", ptr->process.ta_t);
        printf("\t\t\t%d", ptr->process.c_t);
        ptr = ptr->link;
    }
}
void sort()
{
    node *end, *r, *p, *q, *tmp;
    for (end = NULL; end != start->link; end = q)
    {
        for (r = p = start; p->link != end; r = p, p = p->link)
        {
            q = p->link;
            if (p->process.a_t > q->process.a_t)
            {
                p->link = q->link;
                q->link = p;
                if (p != start)
                    r->link = q;
                else
                    start = q;
                tmp = p;
                p = q;
                q = tmp;
            }
        }
    }
}
void calculate_data()
{
    node *ptr;
    sort();
    ptr = start;
    while (ptr->link != NULL)
    {
        if (ptr == start)
        {
            ptr->process.w_t = 0;
            ptr->process.c_t = ptr->process.a_t + ptr->process.b_t;
            ptr->process.ta_t = ptr->process.c_t - ptr->process.a_t;
        }
        ptr->link->process.c_t = ptr->process.c_t + ptr->link->process.b_t;
        ptr->link->process.ta_t = ptr->link->process.c_t - ptr->link->process.a_t;
        ptr->link->process.w_t = ptr->link->process.ta_t - ptr->link->process.b_t;
        ptr = ptr->link;
    }
}
void answer(int *bt, int *wt, int *tat, int *ct)
{
    node *ptr;
    if (start == NULL)
    {
        printf("Data not present!!\n");
        return;
    }
    ptr = start;
    while (ptr != NULL)
    {
        *bt += ptr->process.b_t;
        *wt += ptr->process.w_t;
        *tat += ptr->process.ta_t;
        *ct = ptr->process.c_t;
        ptr = ptr->link;
    }
    printf("\n%d", *wt);
}
int main(void)
{
    int n, completion_time = 0, total_bt = 0, wt = 0, tat = 0;
    float throughput = 0, cpu_utl = 0;

    printf("Enter the number of the processes: ");
    scanf("%d", &n);
    create_data(n);
    calculate_data();
    display_data();
    answer(&total_bt, &wt, &tat, &completion_time);
    throughput = (float)n / (float)completion_time;
    cpu_utl = ((float)total_bt / (float)completion_time) * 100;

    printf("\nAverage Waiting Time : %.3f", (float)wt / (float)n);
    printf("\nAverage Turnaround Time : %.3f", (float)tat / (float)n);
    printf("\nCPU Utilization : %.3f", cpu_utl);
    printf("\nThroughPut : %.3f", throughput);
    return 0;
}
