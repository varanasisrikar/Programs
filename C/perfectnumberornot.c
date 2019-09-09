#include <stdio.h>
int main()
{
        int n;
        printf("Enter a Number\n");
        scanf("%d",&n);
        int i,sum=0;
        for(i=1; i<n; i++)
        {
                if(n%i==0)
                {
                        sum=sum+i;
                }
        }
        if(sum==n)
        {
                printf("\n%d is a perfect number.",n);
        }
        else
        {
                printf("\n%d is not a perfect number.",n);
        }
}
