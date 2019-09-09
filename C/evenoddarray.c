#include<stdio.h>
void evenodd(int arr[],int l)
{
 int i;
 printf("even numbers in a list\n");
 for(i=0;i<l;i++)
 {
     if(arr[i]%2==0)
     {
     printf("%d\t",arr[i]);
     }
 }
 printf("\nodd numbers in a list\n");
 for(i=0;i<l;i++)
 {
     if(arr[i]%2!=0)
     {
     printf("%d\t",arr[i]);
     }
 }
}
int main()
{
     // create int array
     //read array size
     //read array elements
     // call the funtion to print even numbers in a list
     //print even numbers
    //call the function to print odd numbers in a list
    //print odd numbers

    int i,s;
    int a[20];
    printf("Enter array size\n");
    scanf("%d",&s);
    printf("Enter array elements\n");
    for(i=0;i<s;i++)
    {
    scanf("%d",&a[i]);
    }
    evenodd(a,s);
       return 0;
}
