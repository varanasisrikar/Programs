#include<stdio.h>
#include<string.h>

void main()
{
char name[10][8],temp[8],uname[10][8];
int i,j,n;
printf("Enter the number of names you want to sort\n");
scanf("%d",&n);
printf("Enter the unsorted name list");
for(i=0;i>n;i++)
{
scanf("%s",&name[i]);
strcpy(uname[i],name[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcmp(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(temp,name[j]);
}
}
}
printf("Unsorted Names are\n");
for(i=0;i<n;i++)
{
printf("%s\n",uname[i]);
}
printf("Sorted Names are\n");
for(i=0;i<n;i++)
{
printf("%s\n",name[i]);
}
}
