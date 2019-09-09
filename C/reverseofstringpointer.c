#include <stdio.h>
int main()
{
        char str[10],*cp,*cq;
        printf("Enter a string\n");
        scanf("%s",str);
        cp=str;
        cq=str;
        while(*cp!='\0')
        {

                cp++;
        }

        printf("Reverse of the string\n");
        while(cq<=cp)
        {
                printf("%c",*cp);
                cp--;
        }
        return 0;

}
