#include <stdio.h>
#include <string.h>
int main()
{
        char s[100],*p;
        int count=1;
        printf("Enter a sentence\n");
        scanf("%[^\n]s",s);
        p=strtok(s," ");
        printf("%s\n",p);
        while((p=strtok(NULL," "))!=NULL)
        {
                printf("%s\n",p);
        }

        return 0;
}
