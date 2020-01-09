#include <stdio.h>
#include <string.h>
void main()
{
        char str1[50], str2[50], str3[50];
        printf("Enter the first String\n");
        scanf("%s", str1);
        strcpy(str2, str1);
        printf("%s", str2);
}
