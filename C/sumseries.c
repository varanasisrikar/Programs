#include <stdio.h>
int main()
{
        int N;
        float sum = 0.0;
        scanf("%d",&N);
        double i;

        for (i = 1; i <= N; i++)
        {
                sum=sum + 1/i;
        }
        printf("\nSum of the series is: %.2f",sum);
}
