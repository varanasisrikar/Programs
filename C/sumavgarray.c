#include <stdio.h>
void arraysumavg(int arr[],int l)
{
        int sum=0,i; float average;
        for(i=0; i<l; i++)
        {
                sum=sum+arr[i];
        }
        average=sum/(l-1);
        printf("sum=%d\n",sum);
        printf("average=%f\n",average);
}
int main()
{
        int i,s,sum=0,r;
        int a[20];
        //create integer array
        // read array size
        // read array elements
        //call function to call to calculate sum & avg of array elements
        //print sum and avg
        printf("Enter array size\n");
        scanf("%d",&s);
        printf("Enter array elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d",&a[i]);
        }
        arraysumavg(a,s);
}
