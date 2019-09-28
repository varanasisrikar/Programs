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
        int i,n=0;
        printf("Enter no of elements\n");
        scanf("%d",&i);
        struct node *head = NULL;
        while (n<i)
        {
                struct node *temp = (struct node *)malloc(sizeof(struct node));
                if (temp == NULL)
                {
                        return 1;
                }

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
                        temp->next = head;
                        temp->next->prev = temp;
                        head = temp;
                }
        }
        printf("\n\n");
        for (struct node *disptr = head; disptr != NULL; disptr = disptr->next)
        {
                printf("ID: %d\n", disptr->id);
                printf("NAME: %s\n", disptr->name);
        }
}
