#include<stdio.h>


int main()
{
    int n,a,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    if(sum==0)
    {
        printf("EASY");
    }
    else
        printf("HARD");

    return 0;
}