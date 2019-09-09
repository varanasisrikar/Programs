#include <stdio.h>
void checkarmstrong(int a)
{
        int m,sum=0,d;
        m=a;
        while(a>0)
        {
                d=a%10;
                sum=sum+d*d*d;
                a=a/10;
        }
        if (sum==m)
        {
                printf("%d is an Armstrong number",m);
        }
        else
        {
                printf("%d is not an Armstrong number",m);
        }
}

int main()
{
        int n;
        printf("Enter an integer number\n ");
        scanf("%d",&n);
        checkarmstrong(n);
        return 0;
}
