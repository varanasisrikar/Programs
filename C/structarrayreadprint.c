#include <stdio.h>
struct Student
{
        char name [20];
        int sno;
        char gender;
        float marks;
};
int main()
{
        int i;
        struct Student sarr[3];
        printf("Enter Data\n");
        for(i=0; i<3; i++)
        {
                scanf("%s",&sarr[i].name);
                scanf("%d",&sarr[i].sno);
                scanf(" %c",&sarr[i].gender);
                scanf("%f",&sarr[i].marks);
        }
        for(i=0; i<3; i++)
        {
                printf("The Data is\n");
                printf("%s\n",sarr[i].name);
                printf("%d\n",sarr[i].sno);
                printf("%c\n",sarr[i].gender);
                printf("%f\n",sarr[i].marks);
        }
}
