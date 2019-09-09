#include <stdio.h>
int main()
{
        int n;
        printf("Enter a Number\n");
        scanf("%d",&n);
        int d=n,flag=0,i;
        while(d!=0)
        {
                flag++;
                d=d/10;
        }
        printf("\nThe number %d contains %d digits.",n,flag);
}
