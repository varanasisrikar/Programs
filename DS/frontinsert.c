#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp
{
        int eno;
        char name[10],des[10];
        struct emp *next;
};
struct emp *head=NULL;
struct emp *createnode(struct emp *);
void display(struct emp *);

int main()
{
        int n,i;
        printf("Enter the number of employee\n");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
                head=createnode(head);

        }
        display(head);
}

struct emp *createnode(struct emp *h)
{
        struct emp *newnode;
        newnode=(struct emp*)malloc(sizeof(struct emp));
        printf("Employee Number:\n");
        scanf("%d",&newnode->eno);
        printf("Employee name:\n");
        scanf("%s",newnode->name);
        printf("Employee Designation:\n");
        scanf("%s",newnode->des);
        if(head==NULL)
        {
                newnode->next=NULL;
                head=newnode;
        }
        else
        {
                newnode->next=head;
                head=newnode;
        }
        return newnode;
}

void display(struct emp *ptr)
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
                        printf("Employee Details\n");
                        printf("Emp No:%d\n",ptr->eno);
                        printf("Name:%s\n",ptr->name);
                        printf("Designation:%s\n",ptr->des);
                        ptr=ptr->next;

                }
        }
}
