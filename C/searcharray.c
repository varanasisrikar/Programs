#include <stdio.h>
void arraysearch(int arr[],int l,int m)
{
        int i,flag;
        for(i=0; i<l; i++)
        {
                if(arr[i]==m)
                {
                        flag=0;
                }
                else
                {
                        flag=1;
                }
        }
        if(flag==0)
        {
                printf("the given value is in the list\n");
        }
        else
        {
                printf("the given value is not in the list\n");
        }
}
int main()
{
        int i,s;
        int a[20];
        int b;
        printf("Enter array size\n");
        scanf("%d",&s);
        printf("Enter array elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter a value for search\n");
        scanf("%d",&b);
        arraysearch(a,s,b);
        //create an integer array
        //read array size
        //read array elements
        //read a value for search
        //call the function to check the given value is in the list or not
        return 0;
}
