#include <stdio.h>
#include <string.h>
int main()
{
        char s[100],*p;
        int count=1;
        printf("Enter a sentence\n");
        scanf("%[^\n]s",s);
        p=strtok(s," ");
        while((p=strtok(NULL," ")!=NULL))
        {
                count++;
        }
        printf("number of words in given sentence are: %d",count);

        //read a sentence
        //display number of words in given string

        return 0;
}
