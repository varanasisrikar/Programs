#include<stdio.h>
int binarysearchrecursive(int a[],int start,int end,int sv)
{
    if(start>end)
    {
    return -1;
    }
    else
    {
    int mid=(start+end)/2;
    if(a[mid]==sv)
    {
        return 1;
    }
    if(a[mid]>sv)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
         binarysearchrecursive(a,start,end,sv);
    }
}
int main()
{
    int n,i,s,e,search,val;
    int arr[100];
    //read size of the list
    //read list elements in sorted order
    //read key value to search
    //search key value in list using binary search method with recursion
    //display result
    printf("Enter size of a list\n");
    scanf("%d",&n);
    printf("Enter list elements in sorted order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key to search\n");
    scanf("%d",&search);
    s=0;
    e=n-1;
    val=binarysearchrecursive(arr,s,e,search);
    if(val==-1)
    {
        printf("key not found\n");
    }
    else
    {
        printf("key found");
    }
    return 0;
}
