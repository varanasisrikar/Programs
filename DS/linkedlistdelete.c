#include <stdio.h>
#include <stdlib.h>

struct num
{
        int n;
        struct num *next;
};


int main(void)
{
        struct num *head = NULL;

        while(1)
        {
                int x = 0;
                struct num *ptr = (struct num*) malloc (sizeof(struct num));
                if (ptr == NULL)
                {
                        return 1;
                }
                printf("Enter a no. ");
                scanf("%d", &x);
                if (x == EOF)
                {
                        break;
                }
                ptr->n = x;
                ptr->next = NULL;

                if (head == NULL)
                {
                        head = ptr;
                }
                else
                {
                        for (struct num *nptr = head; nptr != NULL; nptr=nptr->next)
                        {
                                if (nptr->next == NULL)
                                {
                                        nptr->next = ptr;
                                        break;
                                }
                        }
                }

        }


        int d = 0;
        printf("Enter the node to be deleted: ");
        scanf("%d", &d);

        if (d == 1)
        {
                struct num *dptr = head;
                head = dptr->next;
                dptr->next = NULL;
                free(dptr);
        }
        else
        {
                int i = 1;
                for (struct num *dptr = head; dptr != NULL; dptr = dptr->next)
                {
                        if (i == d-1)
                        {
                                struct num * deletee = dptr->next;
                                dptr->next = dptr->next->next;
                                deletee->next  = NULL;
                                free(deletee);
                        }
                        i++;
                }
        }

        for (struct num *disptr = head; disptr != NULL; disptr = disptr->next)
        {
                printf("\nNode: %d\n", disptr->n);
        }
        return 0;
}
