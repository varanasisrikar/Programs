#include <stdio.h>
float calculatewaitingtime(int processes[], int bt[], int at[], int n)
{
    int i;
    float swt;
    int wt[n];
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = at[i] + bt[i - 1] + wt[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        swt = swt + wt[i];
    }
    float awt = swt / n;
    return awt;
}
float calculateturnaroundtime(int processes[], int bt[], int wt[], int n)
{
    int i;
    float stat;
    int tat[n];
    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
    }
    for (i = 0; i < n; i++)
    {
        stat = stat + wt[i];
    }
    float atat = stat / n;
    return atat;
}
int main()
{
    int processes[] = {1, 2, 3};
    int n = sizeof processes;
    int bt[] = {10, 5, 8};
    int at[] = {0, 0, 0};
    float awt = float calculatewaitingtime(int processes[], int bt[], int at[], int n);
    float atat = float calculateturnaroundtime(int processes[], int bt[], int wt[], int n);
    printf("Avg Wt = %f\tAvg Tat = %f");
    return 0;
}