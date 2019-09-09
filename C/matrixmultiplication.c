#include <stdio.h>
void mreader(int mat[10][10],int r,int c)
{
        int i,j;
        for(i=0; i<r; i++)
        {
                for(j=0; j<c; j++)
                {
                        scanf("%d",&mat[i][j]);
                }
        }
}
void mmult(int mat1[10][10],int mat2[10][10],int result[10][10],int r1,int r2,int c2)
{
        int i,j,k;
        for(i=0; i<r1; i++)
        {
                for(j=0; j<c2; j++)
                {
                        for(k=0; k<r1; k++)
                        {
                                int sum=0;
                                sum=sum+mat1[i][j]*mat2[j][k];
                                result[i][j]=sum;
                        }
                }
        }

}
void display(int result[10][10],int row,int col)
{
        int i,j;
        for(i=0; i<row; i++)
        {
                for(j=0; j<col; j++)
                {
                        printf("%d\t",result[i][j]);
                }
                printf("\n");
        }
}
int main()
{
        int m1[10][10],m2[10][10],res[10][10],row1,column1,row2,column2;
        printf("Enter row and column sizes of a matrix1\n");
        scanf("%d%d",&row1,&column1);
        printf("Enter row and column sizes of a matrix2\n");
        scanf("%d%d",&row2,&column2);
        if(row2==column1)
        {
                printf("Enter matrix1 elements\n");
                mreader(m1,row1,column1);
                printf("Enter matrix2 elements\n");
                mreader(m2,row2,column2);
                mmult(m1,m2,res,row1,row2,column2);
                printf("result matrix\n");
                display(res,row1,column2);
        }
        else
        {
                printf("Multiplication not possible");
        }
        //Check the condition for matrix multiplication possible or not
        //if multiplication not possible print "Multiplication not possible" message
        //if multiplication is possible, read matrix1 and matrix2 elements using functions
        //call multiplication function & display result matrix
        return 0;
}
