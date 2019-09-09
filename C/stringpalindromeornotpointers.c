#include <stdio.h>
int main()
{
        char s1[20],*p1,*p2;
        int flag=0;
        printf("Enter a string\n");
        scanf("%s",s1);
        p1=s1;
        p2=s1;
        while(*p2!='\0')
        {
                p2++;
        }
        p2--;
        while(*p1!='\0')
        {
                if(*p1!=*p2)
                {
                        flag=1;
                        break;
                }
                p1++;
                p2--;
        }
        if(flag==0)
        {
                printf("String is Palindrome\n");
        }
        else
        {
                printf("String is not a Palindrome\n");
        }
        //read a string
        //call the function to check the given string palindrome or not
        //display string is palindrome or not

        return 0;
}
