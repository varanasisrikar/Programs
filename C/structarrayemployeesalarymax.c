#include <stdio.h>
struct Employees
{
        char name[20];
        int salary;
};
int main()
{
        int n,i,max=-9999,index;
        struct Employees earr[20];
        struct Employees *eptr;
        printf("Enter number of employees\n");
        scanf("%d",&n);
        printf("Enter details employees\n");
        for(i=0; i<n; i++)
        {
                printf("Name:");
                scanf("%s",earr[i].name);
                printf("Salary:");
                scanf("%d",&earr[i].salary);
        }
        eptr=earr;
        for(i=0; i<n; i++)
        {
                if(eptr->salary>max)
                {
                        index=i;
                        max=eptr->salary;
                }
                eptr++;
        }
        printf("Highest salary employee name:%s",earr[index].name);


        //create structure for employees with name and salary
        //raed number of employees
        //read each employee details
        //find highest salary employee display name



        return 0;
}
