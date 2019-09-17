#include <stdio.h>
#include <stdlib.h>

struct Emp
{
    char name[10];
    int id;
    int sal;
    struct Emp *next;
};


int main(void)
{
    struct Emp *head = NULL;
    int exit;


    while (1)
    {
        struct Emp *ptr = (struct Emp *)malloc(sizeof(struct Emp));
        if (ptr == NULL)
        {
            return;
        }
        printf("Enter -1 to exit: ");
        scanf("%d", &exit);
        if (exit == -1)
        {
            break;
        }

        printf("Enter name: ");
        scanf("%s", ptr->name);
        printf("Enter id: ");
        scanf("%d", &ptr->id);
        printf("Enter salary: ");
        scanf("%d", &ptr->sal);
        ptr->next = NULL;

        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            for (struct Emp *nptr = head; nptr != NULL; nptr = nptr->next)
            {
                if (nptr->next == NULL)
                {
                    nptr->next = ptr;
                    break;
                }
            }
        }


    }

    for (struct Emp *disptr = head; head != NULL; disptr=disptr->next)
    {
        printf("Employee name: %s\n", disptr->name);
        printf("Employee id: %d\n", disptr->id);
        printf("Employee salary: %d\n", disptr->sal);
    }
    return 0;
}
