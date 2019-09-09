#include <stdio.h>
struct Complex
{
        float real;
        float img;
};
struct Complex add(struct Complex com1,struct Complex com2)
{
        struct Complex s;
        s.real=com1.real+com2.real;
        s.img=com1.img+com2.img;
        return s;
}
int main()
{
        struct Complex c1,c2;
        printf("Enter 1st complex number\n");
        printf("Enter real and imaginary parts respectively\n");
        scanf("%f",&c1.real);
        scanf("%f",&c1.img);
        printf("Enter 2nd complex number\n");
        printf("Enter real and imaginary parts respectively\n");
        scanf("%f",&c2.real);
        scanf("%f",&c2.img);
        struct Complex r=add(c1,c2);
        printf("Sum = %f + i %f\n",r.real,r.img);
        // define structure for complex numbers
        //real and imaginary parts
        //read comple numbers
        //add them using function
        //display result
        return 0;
}
