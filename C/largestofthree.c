#include<stdio.h>

int largest(int x,int y,int z);

int main()

{
  int a,b,c,max;
  
printf("Enter three numbers\n");
  
scanf("%d%d%d",&a,&b,&c);
  
max=largest(a,b,c);
  
printf("largest value=%d\n",max);
  
return 0;
}

int largest(int x,int y,int z)

{
   //find the largest value 
   
//return largest value
 
int lmax=x;
 
if(y>lmax)
 
{
 lmax=y;
 }
 
if(z>lmax)
 
{
 lmax=z;
 }
 
return lmax;
}    