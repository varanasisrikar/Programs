#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c1[20], c2[20], *s1, *s2, *s3, *og;
    printf("Enter String1\n");
    scanf("%s", c1);
    printf("Enter String2\n");
    scanf("%s", c2);
    s1 = c1;
    s2 = c2;
    s3 = (char *)malloc(strlen(c1) + strlen(c2) + 1);
    og = s3;
    while (*s1)
    {
        *s3 = *s1;
        s1++;
        s3++;
    }
    while (*s2)
    {
        *s3 = *s2;
        s2++;
        s3++;
    }
    printf("result string=%s", og);

    //read string1
    //read string2
    //conactenate string using malloc
    //display result string
}
