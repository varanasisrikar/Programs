#include <stdio.h>
void noofprime(int arr[],int l)
{
        int i,count=0,flag=0,n;
        for(i=0; i<l; i++)
        {
                count=0;
                flag=0;
                for(n=1; n<=l; n++)
                {
                        if(arr[i]%n==0)
                        {
                                count++;
                        }
                        if (count==2)
                        {
                                flag++;
                        }
                }
        }
        printf("number of prime numbers=%d\n",flag);
}
int main()
{
        int i,s;
        int a[20];
        //create  integer array
        //read  array size
        //read array elements excluding number 1
        //call function to count prime numbers and return count

        //print prime numbers count
        printf("Enter array size\n");
        scanf("%d",&s);
        printf("Enter array elements excluding 1\n");
        for(i=0; i<s; i++)
        {
                scanf("%d",&a[i]);
        }
        noofprime(a,s);

        return 0;
}
