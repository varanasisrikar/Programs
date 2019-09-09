#include<stdio.h>
void correspondingsum (int arr[],int arr1[],int l)
{
  int sum,i;
  printf("result array\n");
  for(i=0;i<l;i++)
    {
    sum=arr[i]+arr1[i];
    printf("%d\t",sum);
    }
}
int int main()
{
    int i,s;
    int a[20];
    int a1[20];
    //create two integer array 
    //read  size of arrays
    //read first array elements
    //read second array elements
    //call the function to add corresponding elements of given two array and display
    printf("Enter size of arrays\n");
    scanf("%d",&s);
    printf("Enter first array elements\n");
    for(i=0;i<s;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter second array elements\n");
    for(i=0;i<s;i++)
    {
    scanf("%d",&a1[i]);
    }
    correspondingsum(a,a1,s);
    return 0;
}