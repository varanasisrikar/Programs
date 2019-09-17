#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
        char name[10],des[10];
        int age;
        float salary;
        struct employee* prev;
        struct employee* next;
};

int a=0;
struct employee *head,*tail=NULL;
struct employee* createnode(struct employee* );
struct employee* DlLinsertNodeAtAny(struct employee*, int pos);
void display(struct employee*);

int main()
{

        int n,i,insPlc;
        printf("Enter the number of employee\n");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
                head=createnode(head);

        }
        printf("before new node insert\n");
        display(head);
        printf("Input the position ( 1 to %d ) to insert a node\n",n);
        scanf("%d", &insPlc);
        if(insPlc<1 || insPlc>n)
        {
                printf("Invalid position\n ");
        }
        else
        {
                head=DlLinsertNodeAtAny(head,insPlc);
                printf("after newnode insert\n");
                display(head);
        }
}

struct employee* createnode(struct employee* h)
{
        struct employee* newnode;
        newnode=(struct employee*)malloc(sizeof (struct employee));
        printf("Enter employee name\n");
        scanf("%s",newnode->name);
        printf("Enter employee's designation\n");
        scanf("%s",newnode->des);
        printf("Enter salary of employee\n");
        scanf("%f",&newnode->salary);
        printf("Enter the age of employee\n");
        scanf("%d",&newnode->age);
        if(head == NULL)
        {
                newnode->prev=NULL;
                newnode->next=NULL;
                head=tail=newnode;
        }
        else
        {
                newnode->prev=NULL;
                newnode->next=head;
                head->prev=newnode;
                head=tail=newnode;
        }
        return newnode;
}

struct employee* DlLinsertNodeAtAny(struct employee* newnode, int pos)
{
        int i;
        struct employee *ptr1,*ptr,*eptr=(struct employee*)(malloc(sizeof(struct employee)));
        eptr->next=NULL;
        eptr->prev=NULL;
        ptr=head;
        printf("Enter the employee name\n");
        scanf("%s",eptr->name);
        printf("Enter the employee's designation\n");
        scanf("%s",eptr->des);
        printf("Enter the salary of the employee\n");
        scanf("%f",&eptr->salary);
        printf("Enter the age of the employee\n");
        scanf("%d",&eptr->age);
        if(pos==1)
        {
                head->prev=eptr;
                eptr->next=head;
                head=eptr;
                a++;
                return head;

        }
        else
        {
                for(i=1; i<pos-1; i++)
                {
                        ptr=ptr->next;
                }

                ptr1=ptr->next;
                eptr->next=ptr1;
                ptr->next=eptr;
                ptr1->prev=eptr;
                eptr->prev=ptr;
                a++;
                return head;

        }
}

void display(struct employee* ptr)
{
        ptr=head;
        if(ptr==NULL)
        {
                printf("The node is yet to be displayed\n");
        }

        else
        {
                while(ptr!=NULL)
                {
                        printf("The name of the employee is %s\n",ptr->name);
                        printf("The designation of the employee is %s\n",ptr->des);
                        printf("The salary of the employee is %f\n",ptr->salary);
                        printf("The age of the employee is %d\n",ptr->age);
                        ptr=ptr->next;
                }
        }
}
