#include<stdio.h>

int main()
{
    int arra[6][6],i,j,r,c;
    //printf("Enter matrix value: \n");//
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
           // printf("[%d][%d]= ",i,j);//
            scanf("%d",&arra[i][j]);
            if(arra[i][j]==1)
            {
                r = abs(3-i);
                c= abs(3-j);
            }
        }
    }
    printf("%d",r+c);

    return 0;
}
