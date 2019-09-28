#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
        char name[10],des[10];
        int age;
        float salary;
        struct node* preptr;
        struct node* nextptr;
}*stnode, *ennode;

struct node *head,*tail=NULL;
struct node* createnode(struct node* );
void display(struct node*);
struct node* DlListDeleteAnyNode(int k);
int n;

int main()
{

        int i;
        char ename[10];


        printf("Enter No.of employees\n");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
                head=createnode(head);
                if(i==1) {
                        tail=head;
                }
        }
        printf("before delete\n");
        display(head);
        printf("enter name of emp to delete\n");
        scanf("%s", ename);
        struct node *p;
        int j=1;
        for(p=head; p!=NULL; p=p->nextptr)
        {
                if(strcmp(p->name,ename)!=0)
                {
                        j++;
                }
                else
                {
                        break;
                }
        }
        if(j<=n)
        {
                head=DlListDeleteAnyNode(j);
                if(head!=NULL)
                {
                        printf("after delete\n");
                        display(head);
                }
        }
        else
                printf("Name is not in the list\n");
}
struct node* createnode(struct node* h)
{

        stnode=(struct node*)malloc(sizeof (struct node));
        printf("Enter employee name\n");
        scanf("%s",stnode->name);
        printf("Enter employee's designation\n");
        scanf("%s",stnode->des);
        printf("Enter salary of employee\n");
        scanf("%f",&stnode->salary);
        printf("Enter the age of employee\n");
        scanf("%d",&stnode->age);
        if(head == NULL)
        {
                stnode->preptr=NULL;
                stnode->nextptr=NULL;
                head=stnode;
        }
        else
        {
                stnode->preptr=NULL;
                stnode->nextptr=head;
                head->preptr=stnode;
                head=stnode;
        }

        return stnode;
}

struct node* DlListDeleteAnyNode(int k){

        struct node *tp,*p,*tmp,*pre,*curr;
        int i;

        if(k==1)
        {
                if(head!=NULL)
                {
                        tp=head;
                        head=head->nextptr;
                        if(head!=NULL)
                        {
                                head->preptr=NULL;
                        }
                }
        }
        else if(k==n)
        {
                tmp=tail;
                tail=tail->preptr;
                free(tmp);
                if(tail!=NULL) {tail->nextptr=NULL;}
        }
        else
        {
                int a,b;
                pre=head;
                curr=head->nextptr;
                if(k!=1)
                {
                        for(a=1; a<k-1; a++)
                        {
                                curr=curr->nextptr;
                                pre=pre->nextptr;
                        }
                        pre->nextptr=curr->nextptr;
                        curr->nextptr->preptr=pre;
                        free(curr);
                }
        }
        return head;
}

void display(struct node* sptr)
{
        sptr=head;
        if(sptr==NULL)
        {
                printf("The node is not created\n");
        }

        else
        {
                while(sptr!=NULL)
                {
                        printf("The name of employee %s\n",sptr->name);
                        printf("The designation of employee %s\n",sptr->des);
                        printf("The salary of employee %f\n",sptr->salary);
                        printf("The age of employee %d\n",sptr->age);
                        sptr=sptr->nextptr;
                }
        }
}
