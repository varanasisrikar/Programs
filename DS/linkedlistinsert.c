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
    // create a node
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
    //insert a node

    int p = 0;
    printf("Enter the node position: ");
    scanf("%d", &p);


        struct num *inptr = (struct num*)malloc(sizeof(struct num));
        if (inptr == NULL)
        {
            printf("Couldn't allocate memory for inptr\n");
            return 1;
        }
        printf("Enter number: ");
        scanf("%d", &inptr->n);
        inptr->next = NULL;


    int i = 1;
    for (struct num *sptr = head; sptr != NULL; sptr=sptr->next)
    {
        if (i == p-1)
        {
            inptr->next = sptr->next;
            sptr->next = inptr;

        }
          i++;
    }



// print the linked list:
    for (struct num *disptr = head; disptr != NULL; disptr = disptr->next)
    {
        printf("\nNode: %d\n", disptr->n);
    }
    return 0;
}
