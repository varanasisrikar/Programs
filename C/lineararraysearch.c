#include <stdio.h>
#include <conio.h>
int linear(int a[],int,int);
void main()
{
        int a[20],n,i,key,pos;
        printf("enter the no of elements you want in array\n");
        scanf("%d",&n);
        printf("enter %d elements\n",n);
        for(i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("enter the key which you want to search\n");
        scanf("%d",&key);
        pos=linear(a,n,key);
        if(pos==-1)
                printf("element was not found");
        else
                printf("element was found at %d position",pos+1);
        getch();
}
int linear(int a[],int n,int key)
{
        int i,k=0;
        for(i=0; i<n; i++)
        {
                if(key==a[i])
                {
                        k=i;
                }
        }
        if(k==0)
                return(-1);
        else
                return(k);
}
