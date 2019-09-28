#include <stdio.h>
#include <stdlib.h>

struct node
{
        int id;
        char name[10];
        struct node *next;
        struct node *prev;
};

void deletenode(struct node *, int );

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
        n = 0;
        printf("Enter id to delete: ");
        scanf("%d", &n);
        deletenode(head, n);
}


void deletenode(struct node *head, int pos)
{
        int flag = 0;
        struct node *delptr = head;
        if (delptr->id == pos)
        {

                head = delptr->next;
                delptr->next->prev = NULL;
                free(delptr);
                flag =1;
        }
        else
        {

                while((delptr->next != NULL) && (delptr->next->id != pos))
                {
                        delptr = delptr->next;

                }
                if (delptr->next != NULL)
                {
                        struct node *tptr = delptr->next;
                        if (tptr->next == NULL)
                        {
                                delptr->next = NULL;
                                free(tptr);
                                flag = 1;
                        }
                        else
                        {
                                delptr->next = delptr->next->next;
                                delptr->next->next->prev = delptr;
                                free(tptr);
                                flag = 1;
                        }

                }
        }

        if (flag == 0)
        {
                printf("Id not found\n");
        }
        else
        {
                for (struct node *disptr = head; disptr != NULL; disptr = disptr->next)
                {
                        printf("ID: %d\n", disptr->id);
                        printf("NAME: %s\n", disptr->name);
                }
        }
}
