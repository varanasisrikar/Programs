#include <stdio.h>
int rentalcarcost(int d)
{
        int amt;
        if (d<=3)
        {
                amt=(d*40);
        }
        if (d>3 && d<7)
        {
                amt=(d*40)-20;
        }
        if (d>=7)
        {
                amt=(d*40)-50;
        }
        return amt;
}
int main()
{
        int n,amount;
        printf("The number of days :");
        scanf("%d",&n);
        amount=rentalcarcost(n);
        printf("The cost of rental is %d",amount);
}
