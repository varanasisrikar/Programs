#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
char name[10],des[10];
int age;
float salary;
struct node* ptr;
};
struct node* createnode(struct node* );

void search(struct node*);
int main()
{
struct node* head;
int b,i;

head=NULL;
printf("Number of employees\n");
          scanf("%d",&i);
   while(i>0)
   {
   head=createnode(head);
   i--;

   }

search(head);
}
struct node* createnode(struct node* head)
{
struct node* newnode;
newnode=(struct node*)malloc(sizeof (struct node));
printf("Employee name\n");
scanf("%s",newnode->name);
printf("Employee's designation\n");
scanf("%s",newnode->des);
printf("Salary of the employee\n");
scanf("%f",&newnode->salary);
printf("Age of the employee\n");
scanf("%d",&newnode->age);
if(newnode == NULL)
{
printf("Enter the newnode\n");
newnode->ptr=NULL;
}
else
{
newnode->ptr=head;
}
return newnode;
}

void search(struct node* head)
{
    int count = 0;
    char desig[20];
    printf("Enter the designation to count\n");
    scanf("%s", desig);

    struct node* eptr;
    for (eptr = head; eptr!= NULL; eptr = eptr->ptr)
    {
        if (strcmp(desig, eptr->des)==0)
        {
            count++;
        }
    }
    printf("no of employees with same designation:%d\n", count);

}
