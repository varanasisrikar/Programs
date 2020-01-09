#include <stdio.h>
#define pi 3.14
float Area(float r)
{
        float a;
        a = pi * r * r;
        return a;
}
int main()
{
        float area, radius;
        printf("Enter a radius\n");
        scanf("%f", &radius);
        area = Area(radius);
        printf("Area=%f\n", area);
}
