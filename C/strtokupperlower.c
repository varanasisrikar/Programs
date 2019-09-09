#include <stdio.h>
#include <string.h>
void main()
{
        char s[100],*p;
        printf("Enter a string in lowercase\n");
        scanf("%[^\n]s",s);
        p=strtok(s," ");
        p=s;
        while(*p)
        {
                if(*p>='a'&&*p<='z')
                {
                        *p=*p-32;
                }
                p++;
        }
        printf("String in Uppercase=%s\n",s);
        //read a string in lowercase
        //display that string in uppercase
}
