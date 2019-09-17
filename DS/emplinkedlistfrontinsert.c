#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int number;
    char name[20];
    char desig[20];
    struct node *next;
};

struct node * createnode(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        exit(1);
    }

    printf("Employee Number :\n");
    scanf("%d", &ptr->number);

    printf("Employee name :\n");
    scanf("%s", ptr->name);

    printf("Employee Designation :\n");
    scanf("%s", ptr->desig);

    ptr->next = NULL;

    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
    return head;
}

void display(struct node *head)
{
      struct node *dptr= NULL;
        for (dptr = head; dptr != NULL; dptr = dptr->next)
        {
            printf("Employee Details\n");
            printf("Emp No : %d\n", dptr->number);
            printf("Name : %s\n", dptr->name);
            printf("Designation : %s\n", dptr->desig);
        }
}
int main()
{
    int n;
    printf("Enter the number of employee\n");
    scanf("%d", &n);
    struct node *head = NULL;
    int i;
    for (i = 0; i<n; i++)
    {
        head = createnode(head);
    }
    display(head);
    return 0;
}
