#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct st
{
								int top;
								unsigned capacity;
								int* array;
};

struct st* createSt( unsigned capacity )
{
								struct st* St = (struct st*) malloc(sizeof(struct st)); //here we are dynamically allocating memory for stack.

								if (!St)
								{
																return NULL; //here we are returning NULL when the stack is not created.
								}

								St->top = -1; //here we are assigning -1 to top when empty.
								St->capacity = capacity; //here we are assigning given capacity to stack capacity.

								St->array = (int*) malloc(St->capacity * sizeof(int)); //here we are dynamically allocating array.

								if (!St->array)
								{
																return NULL; //here we are returninng NULL when the array is not allocated.
								}
								return St; //here we are returning stack.
}

int StkisEmpty(struct st* St)
{
								return St->top == -1; //here we are checking if top is -1, which means that stack is empty.
}

char Stkpeek(struct st* St)
{
								return St->array[St->top]; //here we are returning top for display.
}

char Stkpop(struct st* St)
{
								if (!StkisEmpty(St))
								{
																return St->array[St->top--]; //here we are removing and reassigning the top and returning it when the stack is not empty.
								}
								return '$'; //here we are returning $ when the stack is empty.
}

void Stkpush(struct st* St, char op)
{
								St->array[++St->top] = op; //here we are changing the top and returning it.
}

int ChisnotOperand(char ch)
{
								return (ch>= 'a' &&ch<= 'z') || (ch>= 'A' &&ch<= 'Z'); //here we are checking if the given character is not operand.
}

int Preceedence(char ch)
{
								switch (ch) //here we are using switch to check if the operand present in stack has greater or equal preceedence compared to the given operand.
								{
								case '+':
								case '-':
																return 1;

								case '*':
								case '/':
																return 2;

								case '^':
																return 3;
								}
								return -1;
}

int InfixToPostfix(char* exp)
{

								struct st *Stk=createSt(20); //here we are creating a stack of capacity 20.
								while(*exp!='\0') //here while the given expression is not empty, we are entering this loop.
								{
																char chr=*exp; //here we are going for individual character evaluation.
																if(!ChisnotOperand(chr)) //here if the given character is an operand, then we are entering the code block.
																{
																								if(StkisEmpty(Stk))
																								{
																																Stkpush(Stk,chr);
																								}

																								else //else, we are comparing preceeding and pushing, popping accordingly.
																								{
																																while (!StkisEmpty(Stk) && Preceedence(Stkpeek(Stk))>=Preceedence(chr))
																																{
																																								printf("%c",Stkpop(Stk));
																																}

																																Stkpush(Stk,chr);
																								}

																}

																else //else, we print the given character.
																{
																								printf("%c",chr);
																}

																exp++; //here we are navigati gthe pointer to the next character.
								}

								while(!StkisEmpty(Stk)) //here we are popping while the stack is not empty.
								{
																printf("%c",Stkpop(Stk));
								}

}


int main()
{
								int i,n;
								char exp[10];
								printf("Enter expression\n");
								scanf("%s",exp);
								InfixToPostfix(exp);
								return 0;
}
