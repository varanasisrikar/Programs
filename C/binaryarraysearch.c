#include <stdio.h>
#include <conio.h>
int binary(int a[],int,int);
void main()
{
        int a[20],i,n,key,pos;
        printf("enter the no of elements you want in the list\n");
        scanf("%d",&n);
        printf("enter the %d elements of array\n",n);
        for(i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("enter the key you want to search\n");
        scanf("%d",&key);
        pos=binary(a,n,key);
        if(pos==-1)
                printf("key was not found");
        else
                printf("key was found at %d position",pos+1);
        getch();
}
int binary(int a[],int n,int key)
{
        int low=0,high=n-1,mid;
        while(high>=low)
        {
                mid=(low+high)/2;
                if(key>a[mid])
                        low=mid+1;
                else if(key<a[mid])
                        high=mid-1;
                else
                        return(mid);
        }
        return(-1);
}
