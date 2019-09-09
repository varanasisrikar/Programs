#include <stdio.h>
#define pi  3.14
float Area (float r)
{
        float a=pi*r*r;
        return a;
}
int main()
{
        float area, radius;
        printf("To STOP enter 0 for radus\n");
        printf("\nradius=? ");
        scanf("%f",&radius);
        for(count=1; radius!=0; ++count);
        {
                if(radius<0)
                {
                        area=0;
                }
                else
                {
                        area=Area(radius);

                        printf("Area=%f\n",area);

                        printf("\nRadius=?");
                        scanf("%f",&radius);
                }
        }
}
