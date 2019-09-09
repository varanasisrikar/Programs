#include <stdio.h>
int minimum(int arr[],int l)
{
        int min=9999,i;
        for(i=0; i<l; i++)
        {
                if(arr[i]<min)
                {
                        min=arr[i];
                }
        }
        return min;
}
int maximum(int arr[],int l)
{
        int max=-9999,i;
        for(i=0; i<l; i++)
        {
                if(arr[i]>max)
                {
                        max=arr[i];
                }
        }
        return max;
}
int main()
{
        int max; int min,s,i;
        int a[20];
        // create integer array
        //read array size
        //read array elements
        //call funtions to find minimum value of a list and return minimum value
        //call function to find maximum value of a list and return maximum value
        //display minimum and maximum values
        printf("Enter array size\n");
        scanf("%d",&s);
        printf("Enter array elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d",&a[i]);
        }
        minimum(a,s);
        maximum(a,s);
        printf("minimum value=%d\n",min);
        printf("maximum value=%d",max);
}
