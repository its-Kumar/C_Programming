//To impleament SRTF (Sortest reamining time first) CPU scheduling
#include <stdio.h>
#include <stdlib.h>
#define not_exe 0
#define execute 1

typedef struct process
{
    int id, at, bt, wt, tat, ct, status;
} process;
void SRTF(process *pr, int n, float *awt, float *atat);
int shortestProcess(process *pr, int n, int ct);
int sum(int *arr, int n);
void Display(int *arr, int n);

int main(void)
{
    int n, i;
    float awt, atat;
    process pr[50];
    printf("Enter the no of the processes : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the data -->\n");
        printf("Enter arrival time and burst time of process : ");
        scanf("%d%d", &pr[i].at, &pr[i].bt);
        pr[i].id = i + 1;
    }
    SRTF(pr, n, &awt, &atat);
    printf("\nThe avg waiting time = %.2f", awt);
    printf("\nAverage turnaround time = %.2f", atat);
    return 0;
}
void SRTF(process *pr, int n, float *awt, float *atat)
{
    int i, ct = 0, spi;

    for (i = 0; i < n; i++)
    {
        pr[i].status = not_exe;
        pr[i].wt = 0;
    }
    do
    {
        spi = shortestProcess(pr, n, ct);
        if (spi == -1)
            break;

        for (i = 0; i < n; i++)
        {
            if (i != spi && ct >= pr[i].at && pr[i].status != execute)
                pr[i].wt++;
        }
        ct++;
        pr[spi].ct = ct - pr[spi].at;
        pr[spi].bt--;
        if (pr[spi].bt <= 0)
        {
            pr[spi].status = execute;
            pr[spi].ct = ct - pr[spi].at;
        }
    } while (ct);

    for (i = 0; i < n; i++)
    {
        *awt += pr[i].wt;
        *atat += pr[i].ct;
    }
    *awt /= n;
    *atat /= n;
}
int shortestProcess(process *pr, int n, int ct)
{
    int i, min_bt = 99999, min_index = -1;

    for (i = 0; i < n; i++)
    {
        if (pr[i].status == not_exe && pr[i].at <= ct)
        {
            if (pr[i].bt < min_bt)
            {
                min_bt = pr[i].bt;
                min_index = i;
            }
        }
    }
    return min_index;
}
int sum(int *arr, int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}
void Display(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d", arr[i]);
}
