#include <stdio.h>

int main()
{
        char str1[100], str2[100];

        printf("\nEnter the first string: ");
        scanf("%s",str1); // inputting first string

        printf("\nEnter the second string to be concatenated: ");
        scanf("%s",str2); // inputting second string
        char *p1 = str1;
        char *p2 = str2;

        // pointing to the end of the 1st string
        while(*p1) // till it doesn't point to NULL-till string is not empty
        {
                p1++; // point to the next letter of the string
        }
        while(*p2) // till second string is not empty
        {
                *p1 = *p2;
                p2++;
                p1++;
        }
        *p1 = '\0'; // string must end with '\0'
        printf("\n\n\nThe string after concatenation is: %s ", str1);
        return 0;
}
