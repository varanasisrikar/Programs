#include <stdio.h>
#include <stdlib.h>
int main()
{
        int n;
        printf("Enter number of elements\n");
        scanf("%d",&n);
        int *arr;
        printf("Enter elements\n");
        arr=(int*)malloc(n*sizeof(int));
        int sum=0;
        int i;
        for(i=0; i<n; i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
                sum=sum+arr[i];
        }
        printf("Sum=%d\n",sum);
        free(arr);
}
