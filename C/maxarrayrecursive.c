#include <stdio.h>
int maximumrecursive(int a[], int l)
{
        int i,f,max;
        if(l==1)
        {
                return a[0];
        }
        else
        {
               f=a[0];
               max=maximumrecursive(++a,l-1);
                if(max>f)
                {
                        return max;
                }
                else
                {
                        return f;
                }
        }
}
void main()
{
        int a[50],s,i,m;
        printf("Enter array size\n");
        scanf("%d",&s);
        printf("Enter array elements\n");
        for(i=0; i<s; i++)
        {
                scanf("%d",&a[i]);
        }
        m=maximumrecursive(a,s);
        printf("maximum value=%d",m);
}
