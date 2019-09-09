#include <stdio.h>
int main()
{
        int i=0;
        char str[20],*p1;
        printf("Enter string1\n");
        scanf("%s",str);
        char str1[20],*p2;
        printf("Enter string2\n");
        scanf("%s",str1);
        char concat[50],*p3;
        p1=str;
        p2=str1;
        p3=concat;
        while(*p1)
        {
                concat[i]=*p1;
                p1++;
                i++;
        }
        while(*p2)
        {
                concat [i]=*p2;
                p2++;
                i++;
        }
        p3[i]='\0';
        printf("String after concatenation=%s",p3);

        //read string1
        //read string2
        //concatenate two strings
        //display concatenate string
        return 0;
}
