#include<stdio.h>
#include<stdlib.h>

#define size 7
struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];
void init()
{
    int i;
for(i = 0; i< size; i++)
        chain[i] = NULL;
}

void insert(int value)
{
int i = value%size;
    struct node *nptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    nptr->data = value;
    nptr->next = NULL;



    if (chain[i] == NULL)
    {
        chain[i] = nptr;
    }
    else
    {
        temp = chain[i];
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
    }


}
void print()
{
    int i;

for(i = 0; i< size; i++)
    {
        struct node *temp = chain[i];
printf("chain[%d]-->",i);
        while(temp)
        {
printf("%d -->",temp->data);
            temp = temp->next;
        }
printf("NULL\n");
    }
}

int main()
{
init();
   int n,k,i;
printf("Enter number of values to insert \n");
scanf("%d",&n);
printf("Enter values to insert \n");
    for(i=1;i<=n;i++)
    {
	scanf("%d",&k);
	insert(k);
	}


    return 0;
}
