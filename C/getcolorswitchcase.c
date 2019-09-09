#include <stdio.h>
int int main()
{
        char color;
        printf("Enter the VIBGYOR Color\n");
        color=getchar();
        switch (color)
        {
        default:
                printf("Invalid Color\n");
                break;
        case 'y':
        case 'Y':
                printf("Yellow\n");
                break;
        case 'b':
        case 'B':
                printf("Blue\n");
                break;
        case 'g':
        case 'G':
                printf("Green\n");
                break;
        }
}
