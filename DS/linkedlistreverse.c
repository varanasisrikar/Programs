#include <stdio.h>
#include <stdlib.h>

struct num
{
        int n;
        struct num *next;
};

int main()
{

        struct num *head = NULL;
        while(1)
        {
                int number = 0;
                printf("Enter number for node: ");
                scanf("%d", &number);

                if (number == EOF) // for this to happen you have to give input as -1, coz -1 == EOF
                {
                        break;
                }
                struct num *ptr = (struct num*)malloc(sizeof(struct num));
                if (ptr == NULL)
                {
                        return 1;
                }

                ptr->n = number;
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
        }
        printf("\n\n\n");

        for (struct num *dptr=head; dptr!=NULL; dptr = dptr->next)
        {

                printf("Node no. %d\n", dptr->n);
        }

}
