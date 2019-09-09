#include <stdio.h>
#include <arrmaximum.h>
int main()
{
        int max,s,i;
        int a[20];
        printf("Enter array size\n");
        scanf("%d",&s);
        printf("Enter array elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d",&a[i]);
        }
        max=maximum(a,s);
        printf("maximum value=%d",max);
}
