#include <stdio.h>
int temp;
void heapify(int arr[], int size, int i)
{
        int max,ln,rn;
        max=i;
        ln=2*i+1;
        rn=2*i+2;

        if(rn<size && arr[rn]>arr[max])
        {
                max=rn;
        }

        if(ln<size && arr[ln]>arr[max])
        {
                max=ln;
        }

        if(max!=i)
        {
                temp=arr[i];
                arr[i]=arr[max];
                arr[max]=temp;

                heapify(arr,size,max);
        }



}
void heapSort(int arr[], int size)
{
        int i;
        for (i = size / 2 - 1; i >= 0; i--)
                heapify(arr, size, i);
        for (i=size-1; i>=0; i--)
        {
                temp = arr[0];
                arr[0]= arr[i];
                arr[i] = temp;
                heapify(arr, i, 0);
        }
}
void main()
{
        int i,n;
        printf("Enter array size\n");
        scanf("%d",&n);
        int arr[n];
        printf("Enter Elements\n");
        for(i=0; i<n; i++) {
                scanf("%d",&arr[i]);
        }
        int size = sizeof(arr)/sizeof(arr[0]);
        heapSort(arr, size);
        printf("sorted elements\n");
        for (i=0; i<size; ++i)
                printf("%d ",arr[i]);
}
