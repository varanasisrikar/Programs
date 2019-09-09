#include <stdio.h>
int main()
{
        char str[20],search[1],*p1;
        int flag=0,i=0;
        printf("Enter character to be searched\n");
        scanf("%s",search);
        printf("Enter a string\n");
        scanf("%s",str);
        p1=str;
        while(*p1)
        {
                if(*p1==search[0])
                {
                        flag++;
                        break;
                }
                p1++;
                i++;
        }
        if(flag==0)
        {
                printf("character not found");
        }
        else
        {
                printf("character found at index %d",i);
        }


        return 0;
}
