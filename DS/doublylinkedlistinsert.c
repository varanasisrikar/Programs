#include <stdio.h>
#include <stdlib.h>

struct node
{
    int id;
    char name[10];
    struct node *next;
    struct node *prev;

};
void Insert(struct node *, int);
int main()
{
    int n;
    struct node *head = NULL;
    int count = 0;
    while(1)
    {
        printf("Enter id: ");
        scanf("%d", &n);
        if(n == -1)
        {
            break;
        }
        count++;
        struct node *temp = (struct node *)malloc(sizeof(struct node));

        if (temp == NULL)
        {
            return 1;
        }

        temp->id = n;
        printf("Enter name: ");
        scanf("%s", temp->name);
        temp->next = NULL;
        temp->prev = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            temp->next->prev = temp;
            head = temp;
        }
    }
    int pos = 0;
    printf("Enter pos to insert: ");
    scanf("%d", &pos);
    if (pos == 1 || pos == count)
    {
        printf("Cannot INSERT\n");
    }
    else
    {
        Insert(head,pos);
    }
}

void Insert(struct node *head, int n)
{
    struct node *insptr = (struct node *)malloc(sizeof(struct node));
    if (insptr == NULL)
        {
            return 1;
        }
        printf("Enter id: ");
        scanf("%d", &insptr->id );
        printf("Enter name: ");
        scanf("%s", insptr->name);
        insptr->next = NULL;
        insptr->prev = NULL;
        int i = 1;
        struct node *ptr = head;

        while(i<n-1)
        {
            ptr = ptr->next;
            i++;
        }
        struct node *tptr = ptr->next;
        ptr->next = insptr;
        insptr->prev = ptr;
        insptr->next = tptr;
        tptr->prev = insptr;

    for (struct node *disptr = head;  disptr != NULL; disptr = disptr->next)
    {
        printf("ID: %d\n", disptr->id);
        printf("Name: %s\n", disptr->name);
    }
}














