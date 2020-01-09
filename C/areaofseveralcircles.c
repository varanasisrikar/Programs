#include <stdio.h>
#define pi 3.14
float Area(float r)
{
    float a = pi * r * r;
    return a;
}
int main()
{
    float area, radius;
    int n, i;
    char c;
    printf("How many circles?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        printf("\nCircle no : %d\nRadius = ? ", i);
        scanf("%f", &radius);
        if (radius <= 0)
        {
            area = 0;
        }
        else
        {
            area = Area(radius);
        }
        printf("Area=%.2f\n", area);
        c = _getch();
    }
}
