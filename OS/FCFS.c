#include <stdio.h>
float calculatewaitingtime(int wt[], int bt[], int n)
{
        int i;
        float swt=0;
        wt[0] = 0;
        for (i = 1; i < n; i++)
        {
                wt[i] = bt[i - 1] + wt[i - 1];
        }
        for (i = 0; i < n; i++)
        {
                swt = swt + wt[i];
        }
        float awt = swt / n;
        return awt;
}
float calculateturnaroundtime(int bt[], int wt[], int n)
{
        int i;
        float stat=0;
        int tat[n];
        for (i = 0; i < n; i++)
        {
                tat[i] = wt[i] + bt[i];
        }
        for (i = 0; i < n; i++)
        {
                stat = stat + tat[i];
        }
        float atat = stat / n;
        return atat;
}
int main()
{
        int processes[] = {1, 2, 3};
        int n = sizeof (processes);
        int bt[] = {10, 5, 8};
        int wt[n];
        float awt =calculatewaitingtime(wt,bt,n);
        float atat =calculateturnaroundtime(bt,wt,n);
        printf("Avg Wt = %f\tAvg Tat = %f",awt,atat);
        return 0;
}
