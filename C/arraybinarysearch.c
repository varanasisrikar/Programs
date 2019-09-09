#include <stdio.h>
int binarysearch(int arr[],int l,int s)
{
        int start,end,mid;
        start=0;
        end=l-1;
        while(start<=end)
        {
                mid=(start+end)/2;
                if(arr[mid]==s)
                {
                        return mid;
                        break;
                }
                else if(arr[mid]<s)
                {
                        start=mid+1;
                }
                else
                {
                        end=mid-1;
                }
        }
        return 0;
}
int main()
{
        int n,i,search,val,c;
        int a[100];
        printf("Enter array size\n");
        scanf("%d",&n);
        printf("Enter array elements\n");
        for(i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter a value for search\n");
        scanf("%d",&search);
        val=binarysearch(a,n,search);
        if(val==0)
        {
                printf("the given value is not in the list\n");
        }
        else
        {
                printf("the given value is at index %d",val);
        }
        c=_getch();
}
