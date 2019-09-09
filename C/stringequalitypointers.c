#include <stdio.h>
int main()
{
        char s1[20],s2[20],*p1,*p2;
        int flag=0;
        printf("Enter string1\n");
        scanf("%s",s1);
        printf("Enter string2\n");
        scanf("%s",s2);
        p1=s1;
        p2=s2;
        while(*p1!='\0')
        {
                if(*p1!=*p2)
                {
                        flag=1;
                        break;
                }
                p1++;
                p2++;
        }
        if(flag==0)
        {
                printf("Strings are same\n");
        }
        else
        {
                printf("Strings are different\n");
        }
        //read string1
        //read string2
        //compare two strings
        //display strings are same or different

        return 0;
}
