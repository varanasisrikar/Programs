#include <stdio.h>
 #include <string.h>
int main()
{
        char s1[100];
        printf("Enter a sentence\n");
        scanf("%[^\n]s",s1);
        char *p;
        char *l;
        char *s;
        p=strtok(s1," ");
        s=p;
        l=p;
        while((p=strtok(NULL," "))!=NULL)
        {
                if(strlen(p)<strlen(s))
                {
                        s=p;
                }
                if(strlen(p)>strlen(l))
                {
                        l=p;
                }
        }
        printf("Largest word is: %s\n ",l);
        printf("Smallest word is: %s\n",s);
        //read a sentence
        // to read sentence use this scanf statement scanf("%[^\n]s", str);
        //display largest word and smallest word
        //If there are two or more words of same length then the first one is considered.
        return 0;
}
