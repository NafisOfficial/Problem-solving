#include<stdio.h>

int main()
{
    int mat1[10][10],mat2[10][10],mul[10][10],r1,c1,r2,c2,i,j,k,sum=0;
    printf("Enter The number of row and column of first matrx:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter The number of row and column of second matrx:\n");
    scanf("%d%d",&r2,&c2);
    while(c1 != r2)
    {
        printf("Error!\n");
        printf("C1 and R2 must be equal for multiplacation.\n");
        printf("Enter The number of row and column of first matrx:\n");
        scanf("%d%d",&r1,&c1);
        printf("Enter The number of row and column of second matrx:\n");
        scanf("%d%d",&r2,&c2);
    }
    printf("Input the value of first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("[%d][%d]= ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Input the value of second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("[%d][%d]= ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    //multiplacing here//
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    //print here //
    printf("The result matrix is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }


    return 0;
}
