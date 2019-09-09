#include <stdio.h>
int sumrecursive(int a[],int l)
{
        int i,f,sum;
        if(l<0)
        {
                return 0;
        }
        else
        {
                sum=a[l-1]+sumrecursive(a,l-1);
                return sum;
        }
}
int main()
{
        int arr[50],i,s,sum;
        printf("Enter size of the array\n");
        scanf("%d",&s);
        printf("Enter array elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d",&arr[i]);
        }
        sum=sumrecursive(arr,s);
        printf("Sum of array elements=%d\n",sum);


        return 0;
}
