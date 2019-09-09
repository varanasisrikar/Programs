#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct Stack
{
								int top;
								int size;
								unsigned capacity;
								int* array;
};

struct Stack* createStack(unsigned capacity)
{
								struct Stack *ptr=(struct Stack*)malloc(sizeof(struct Stack));
								ptr->array=(int *)malloc(sizeof(int)*capacity);
								ptr->top=-1;
								ptr->size=0;
								ptr->capacity=capacity;
								return ptr;
}

int isFull(struct Stack* stack)
{
								if(stack->size==stack->capacity-1)
								{
																return 1;
								}
								else
								{
																return 0;
								}
}

int isEmpty(struct Stack* stack)
{
								if(stack->top==-1)
								{
																return 1;
								}
								else
								{
																return 0;
								}
}

void push(struct Stack* stack, int item)
{
								int rF=isFull(stack);
								if(rF!=1)
								{
																stack->top=stack->top+1;
																stack->array[stack->top]=item;
																stack->size+1;
																printf("%d pushed to stack\n",item);
								}
								else
								{
																printf("Stack is Full\n");
								}
}

int pop(struct Stack* stack)
{
								int rE=isEmpty(stack);
								if(rE!=1)
								{
																stack->top=stack->top-1;
																stack->size-1;
																return stack->array[stack->top+1];
								}
								else
								{
																printf("Stack is Empty\n");
								}
}

int main()
{
								struct Stack* stack = createStack(100);
								push(stack,10);
								push(stack,20);
								push(stack,30);
								printf("%d popped from stack\n", pop(stack));
								return 0;
}
