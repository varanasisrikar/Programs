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
void madd(int mat1[10][10],int mat2[10][10],int result[10][10],int r,int c)
{
        int i,j;
        for(i=0; i<r; i++)
        {
                for(j=0; j<c; j++)
                {
                        result[i][j]=mat1[i][j]+mat2[i][j];
                }
        }

}
void display(int result[10][10],int r,int c)
{
        int i,j;
        for(i=0; i<r; i++)
        {
                for(j=0; j<c; j++)
                {
                        printf("%d\t",result[i][j]);
                }
                printf("\n");
        }

}
//function for read matrix elements
// function for addition of the two matrix
//function for matrix display

int main()
{
        int row,column;
        int m1[10][10]; int m2[10][10]; int res[10][10];
        printf("Enter row and column sizes of a matrix\n");
        scanf("%d%d",&row,&column);
        printf("Enter matrix1 elements\n");
        mreader(m1,row,column);
        printf("Enter matrix2 elements\n");
        mreader(m2,row,column);
        madd(m1,m2,res,row,column);
        printf("result matrix\n");
        display(res,row,column);
        //read row and column sizes of a matrix
        //call matrix elements read function toread matrix1 elements
        //call matrix elements read function toread matrix2 elements
        //call matrix add function to add two matrix
        //call matrix elements display function to display reult matrix

        return 0;
}
