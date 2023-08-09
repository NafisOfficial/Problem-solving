#include<stdio.h>

int main()
{
    int mat[10][10],transpose[10][10],i,j,row,col;
    printf("Enter the row and column no of the matrix:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix value.\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d],[%d]= ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }

   for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=mat[i][j];
        }
    }

    printf("The result matrix is: \n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d  ",transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}
