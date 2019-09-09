#include <stdio.h>
#define pi  3.14
float Area (float r)
{
        float a;
        a=pi*r*r;
        return a;
}
int main()
{
        float area, radius;
        char c;
        printf("Enter a radius\n");
        scanf("%f",&radius);
        if(radius<0)
        {
                area=0;
        }
        else
        {
                area=Area(radius);
        }
        printf("Area=%.2f\n",area);
        c=_getch();
        return 0;

}
