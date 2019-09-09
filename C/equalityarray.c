#include <stdio.h>
void arrayequality(int arr[],int arr1[],int l)
{
        int i,flag;
        for(i=0; i<l; i++)
        {
                if(arr[i]==arr1[i])
                {
                        flag=0;
                }
                else
                {
                        flag=1;
                        break;
                }
        }
        if(flag==1)
        {
                printf("Arrays are not equal\n");
        }
        else
        {
                printf("Arrays are equal\n");
        }
}
int main()
{
        int i,s;
        int a[20];
        int a1[20];
        printf("Enter arrays' size\n");
        scanf("%d",&s);
        printf("Enter first array's elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d\n",&a[i]);
        }
        printf("Enter second array's elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d\n",&a1[i]);
        }
        arrayequality(a,a1,s);
        return 0;
        //declare two arrays
        //read arrays size
        //read first array elements
        //read second array elements
        //call the function to check the given arrays are equal or not
}
