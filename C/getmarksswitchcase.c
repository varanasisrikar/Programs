#include <stdio.h>
int int main()
{
        int m,marks;
        printf("Enter the percentage of the student\n");
        scanf("%d",&marks);
        m=marks/10;
        switch(m)
        {
        case 0:
        case 1:
        case 2:
        case 3:
                printf("Student has failed\n");
                break;
        case 4:
                printf("The grade is 3rd Division\n");
                break;
        case 5:
                printf("The grade is 2nd Division\n");
                break;
        case 6:
        case 7:
                printf("The grade is 1st Division\n");
                break;
        case 8:
        case 9:
        case 10:
                printf("The grade is Distinction\n");
                break;
        default:
                printf("Student has failed\n");
                break;
        }
        return 0;
        //read percentage of marks
        //display grade according to above instructions
}
