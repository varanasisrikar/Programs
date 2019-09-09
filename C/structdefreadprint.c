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
        struct Student s1;
        printf("Enter Data\n");
        scanf("%s",&s1.name);
        scanf("%d",&s1.sno);
        scanf(" %c",&s1.gender);
        scanf("%f",&s1.marks);
        printf("The Data is\n");
        printf("%s\n",s1.name);
        printf("%d\n",s1.sno);
        printf("%c\n",s1.gender);
        printf("%f\n",s1.marks);
        return 0;
}
