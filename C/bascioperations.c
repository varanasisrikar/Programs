#include <stdio.h>
    int basic_op(char op, int value1, int value2)
    {
        int value3;
        if(op=='+')
        {
                value3=value1+value2;
        }
        if(op=='-')
        {
                value3=value1-value2;
        }
        if(op=='*')
        {
                value3=value1*value2;
        }
        if(op=='/')
        {
                if (value2!=0) value3=value1/value2;
                else printf("\ndivision by zero is not permitted");
        }
return value3;

}
int main()
{
      int v1,v2,value;
      char opr;
       printf("Enter the Operator: " );
       opr=getchar();
      printf("\nEnter the Values of the numbers " );
      scanf("%d%d",&v1, &v2);
      value=basic_op(opr,v1,v2);
      printf("Result of operation is %d",value);
}
