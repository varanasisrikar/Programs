#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
        char employeename[10];
        char desig[10];
        float sal;
        int age;
        struct employee*next;
};

struct employee*head;

struct employee*addnode(struct employee p[],int x,int e)
{
        struct employee *ptr=(struct employee*)malloc(sizeof(struct employee));
        strcpy(ptr->employeename,p[e].employeename);
        strcpy(ptr->desig,p[e].desig);
        ptr->sal=p[e].sal;
        ptr->age=p[e].age;
        ptr->next=NULL;

        if(head==NULL)
        {
                head=ptr;
        }

        else
        {
                ptr->next=head;
                head=ptr;
        }
}

void display()
{
        struct employee *y;
        
        for(y=head; y!=NULL; y=y->next)
        {
                printf("\n");
                printf("Name of the employee ");
                printf("%s",y->employeename);
                printf("\n");
                printf("Designation of the employee is ");
                printf("%s",y->desig);
                printf("\n");
                printf("Salary of the employee is ");
                printf("%f",y->sal);
                printf("\n");
                printf("Age of the employee is ");
                printf("%d",y->age);
        }

}

int main()
{
        int no,i,n;
        printf("Number of employees\n");
        scanf("%d",&no);
        struct employee s[no];

        for(i=0; i<no; i++)
        {
                printf("Employee name\n");
                scanf("%s",s[i].employeename);
                printf("Employee's designation\n");
                scanf("%s",s[i].desig);
                printf("Salary of the employee \n");
                scanf("%f",&s[i].sal);
                printf("Age of the employee \n");
                scanf("%d",&s[i].age);
                addnode(s,no,i);

        }

        display();

}
