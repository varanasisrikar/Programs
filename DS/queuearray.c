#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int rear;
    int *arr;
    int capacity;
} ;

struct queue * createqueue(int n)
{
    struct queue *myq = (struct queue *)malloc(sizeof(struct queue));
    if (myq == NULL)
    {
        exit(1);
    }
    myq->front = -1;
    myq->rear = -1;
    myq->capacity = n;
    int i ;
    myq->arr = (int *)malloc(sizeof(int)*n);
    for (i=0; i<n; i++)
    {
        myq->arr[i] = -1;
    }
    return myq;

}

int isfull(struct queue * q)
{
    if ((q->rear == q->capacity-1 && q->front == 0) || (q->front == q->rear+1))
    {
        return 1;
    }
    return 0;
}

int isempty(struct queue *q)
{
    if (q->front == -1)
    {
        return 1;
    }
    return 0;
}


void push(struct queue *q, int val)
{
    if (!isfull(q))
    {
        if (q->rear == q->capacity-1)
        {
            q->rear = -1;
        }
        q->rear++;
        if (q->front == -1)
        {
            q->front = 0;
        }
        q->arr[q->rear] = val;

    }
    else
    {
        printf("Queue is FULL\n");
    }
}

int pop(struct queue *q)
{
    if (!isempty(q))
    {
        int r = q->arr[q->front];

        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
        {
            if (q->front == q->capacity-1)
            {
                q->front = -1;
            }

        }
        q->front = q->front + 1 ;
        return r;
    }
    else
    {
        printf("Queue is EMPTY\n");
    }

}
int main()
{
    int n;
    printf("Enter capacity: ");
    scanf("%d", &n);
    struct queue *q = createqueue(n);

    push(q,10);
    push(q,20);
    push(q,30);
    push(q,40);
    push(q,50);
    push(q, 60);
    printf("%d has been popped\n", pop(q));
    printf("%d has been popped\n", pop(q));

    return 0;
}























