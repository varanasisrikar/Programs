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

int MatchingPair(char character1, char character2) //here we are checking if the given characters are a matching pair.
{
								if (character1 == '(' && character2 == ')')
																return 1;
								else if (character1 == '{' && character2 == '}')
																return 1;
								else if (character1 == '[' && character2 == ']')
																return 1;
								else
																return 0;
}

int ParenthesisareBalanced(char* exp) //here we are
{
								struct st *Stk=createSt(20);
								while(*exp!='\0')
								{
																char chr1=*exp;
																if(chr1=='}'||chr1==')'||chr1==']')
																{
																								char chr2=Stkpeek(Stk);
																								if(!StkisEmpty(Stk))
																								{
																																if(MatchingPair(chr2,chr1))
																																{
																																								Stkpop(Stk);
																																}

																																else
																																{
																																								return 0;
																																}

																								}

																								else
																								{
																																return 0;
																								}

																}

																else
																{
																								Stkpush(Stk,chr1);
																}

																exp++;

								}

								return 1;

}

int main()
{
								char exp[20];
								printf("Enter expression\n");
								scanf("%s",exp);
								if(!ParenthesisareBalanced(exp))
								{
																printf("expression is not balanced");
								}

								else
								{
																printf("expression is balanced");
								}
								return 0;
}
