#include<stdio.h>

int main()
{
    int mat1[10][10],mat2[10][10],multiplacation[10][10],i,j,r1,c1,r2,c2,sum=0;
    printf("Enter the row and column number of first matrix :\n ");
    scanf("%d%d",&r1,&c1);
    printf("Enter  the row and column number of second metrix:\n ");
    scanf("%d%d",&r2,&c2);
    while(c1 != r2)
    {
        printf("Error!\n c1 and r2 must be equal for matrix multiplacation.\n");
        printf("Enter the row and column number of first matrix :\n ");
        scanf("%d%d",&r1,&c1);
        printf("Enter  the row and column number of second metrix:\n ");
        scanf("%d%d",&r2,&c2);
    }
    //input first matrix here//
    printf("Enter first matrix value.\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("[%d],[%d] =  " ,i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    // input second matrix here. //
    printf("Enter second matrix value.\n");
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("[%d],[%d] =  " ,i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    // print first matrix here.//
    printf("The first matrix value is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d " ,mat1[i][j]);
        }
        printf("\n");
    }
    //print the second matrix//
    printf("The second matrix value is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d " ,mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
