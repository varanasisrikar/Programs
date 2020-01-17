#include <stdio.h>
float calculatewaitingtime(int process[], int bt[], int at[], int n)
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
        swt=swt+wt[i];
    }
    float awt=swt/n;
    return awt;
}
float calculateturnaroundtime(int process[], int bt[], int wt[], int n)
{
    int i;
    int tat[n];
    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
    }
}