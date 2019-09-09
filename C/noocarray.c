#include<stdio.h>
void noofoccurences(int arr[],int l,int m)
{
  int count=0,i;
  for(i=0;i<l;i++)
  {
    if(arr[i]==m)
    {
    count++;
    }
  }
  printf("number of occurrences is %d\n",count);
}
int int main()
{
    int i,s,b;
    int a[20];
    printf("Enter array size\n");
    scanf("%d",&s);
    printf("Enter array elements\n");
    for(i=0;i<s;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter a value\n");
    scanf("%d",&b);
    noofoccurences(a,s,b);
    //create integer array
   //read array size
  //read array elements
  //read a value to count number of occurences in a list
  //call the function to count the number of occurences in a list
     return 0;
}