
/* Write a c program to implement hash tables with probing(linear and quadratic

Enter the size of the hash table:
5
Enter the number of elements:
5
Enter Elements:
25
55
65
45
35
Linear Probing
The elements in the array are:
Element at position 0: 25
Element at position 1: 55
Element at position 2: 65
Element at position 3: 45
Element at position 4: 35
QUADRATIC PROBING
The elements in the array are:
Element at position 0: 25
Element at position 1: 55
Element at position 2: 35
Element at position 3: 45
Element at position 4: 65
*/

/*
a) Linear Probing: In linear probing, we linearly probe for next slot. For example, typical gap between two probes is 1 as taken in below example also.
let hash(x) be the slot index computed using hash function and S be the table size

If slot hash(x) % S is full, then we try (hash(x) + 1) % S
If (hash(x) + 1) % S is also full, then we try (hash(x) + 2) % S
If (hash(x) + 2) % S is also full, then we try (hash(x) + 3) % S
..................................................
..................................................

b) Quadratic Probing We look for i2�th slot in i�th iteration.

let hash(x) be the slot index computed using hash function.
If slot hash(x) % S is full, then we try (hash(x) + 1*1) % S
If (hash(x) + 1*1) % S is also full, then we try (hash(x) + 2*2) % S
If (hash(x) + 2*2) % S is also full, then we try (hash(x) + 3*3) % S
..................................................
..................................................
*/
#include <stdio.h>
int tsize;
int hasht(int key)
{
 int i ;
 i = key%tsize ;
 return i;
}


int rehashl(int i) // linear hashing
{
 //write code
 return (i+1)%tsize;

}


int rehashq(int key, int j) // quadratic hashing
{

    //write code
    return (key+j*j)%tsize;

}

int main()
{
    int key,arr[20],hash[20],i,n,s,op,j,k ;

    printf ("Enter the size of the hash table:\n");
    scanf ("%d",&tsize);

    printf ("Enter the number of elements:\n");
    scanf ("%d",&n);

    for (i=0;i<tsize;i++)
 hash[i]=-1 ;

    printf ("Enter Elements:\n");
    for (i=0;i<n;i++)
    {
 scanf("%d",&arr[i]);
    }


     for (i=0;i<tsize;i++)
     hash[i]=-1 ;

     for(k=0;k<n;k++)
     {
        key=arr[k] ;
        i = hasht(key);
        while (hash[i]!=-1) // some value is present at index i
        {
            i = rehashl(i);
        }
        hash[i]=key ;
     }
    printf ("Linear Probing\n");
    printf("The elements in the array are:\n");
     for (i=0;i<tsize;i++)
     {
        printf("Element at position %d: %d\n",i,hash[i]);
     }

     for (i=0;i<tsize;i++)
            hash[i]=-1 ;

     for(k=0;k<n;k++)
     {
        j=1;
        key=arr[k] ;
        i = hasht(key);
        while (hash[i]!=-1)
        {
            i = rehashq(i,j);
            j++ ;
        }
        hash[i]=key ;
     }
     printf ("QUADRATIC PROBING\n");
     printf("The elements in the array are:\n");
     for (i=0;i<tsize;i++)
     {
     printf("Element at position %d: %d\n",i,hash[i]);
     }

}
