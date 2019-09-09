#include <stdio.h>
int main()
{
        char s1[30],s2[30],*p1,*p2;
        printf("Enter string1\n");
        scanf("%s",s1);
        printf("Enter string2\n");
        scanf("%s",s2);
        int a[26]={0},b[26]={0};
        int flag=0;
        p1=s1;
        p2=s2;
        while(*p1)
        {
                a[*p1-'a']++;
                p1++;
        }
        while(*p2)
        {
                b[*p2-'b']++;
                p2++;
        }
        int i=0;
        while(i<26)
        {
                if(a[i]!=b[i])
                {
                        flag=1;
                        break;
                }
                i++;
        }
        if(flag==0)
        {
                printf("strings are anagrams\n");
        }
        else
        {
                printf("strings are not anagrams\n");
        }
        return 0;
}
