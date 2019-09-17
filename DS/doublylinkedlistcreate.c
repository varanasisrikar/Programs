#include <stdio.h>
#include <stdlib.h>

struct node
{
    int id;
    char name[10];
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node *head = NULL;
    while (1)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        if (temp == NULL)
        {
            return 1;
        }
        int n;

        printf("Enter id: ");
        scanf("%d", &n);
        if (n == -1)
        {
            break;
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
            for (struct node *nptr = head; nptr != NULL; nptr = nptr->next)
            {
                if (nptr->next == NULL)
                {
                    nptr->next = temp;
                    temp->prev = nptr;
                    break;
                }
            }
        }
    }
    printf("\n\n");
    for (struct node *disptr = head; disptr != NULL; disptr = disptr->next)
    {
        printf("ID: %d\n", disptr->id);
        printf("NAME: %s\n", disptr->name);
    }
}
