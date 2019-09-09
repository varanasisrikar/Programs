#include <stdio.h>
#include <stdlib.h>
struct Employee
{
        int eno;
        char ename[20];
        float salary;
};
int main()
{
        FILE *fptr;
        int i,n,m;
        struct Employee *eptr,*temp,e;
        printf("how many Employees\n");
        scanf("%d",&n);
        printf("Enter employee Details\nemployee number,name and salary\n");
        eptr=(struct Employee *)malloc(n*sizeof(struct Employee));
        temp=eptr;
        for(i=0; i<n; i++)
        {
                scanf("%d",&temp->eno);
                scanf("%s",temp->ename);
                scanf("%f",&temp->salary);
                temp++;
        }
        fptr=fopen("abc.txt","w");
        fwrite(eptr,sizeof(struct Employee),n,fptr);
        fclose(fptr);
        free(eptr);
        fptr=fopen("abc.txt","r");
        while(1)
        {
                printf("Enter which employee record to read\nif you want to exit enter -1\n");
                scanf("%d",&m);
                if(m==-1)
                {
                        break;
                }
                fseek(fptr,(m-1)*sizeof(struct Employee),SEEK_SET);
                fread(&e,sizeof(struct Employee),1,fptr);
                printf("%d\n",e.eno);
                printf("%s\n",e.ename);
                printf("%f\n",e.salary);
                fcloṇse(fptr);
        }


        return 0;
}
