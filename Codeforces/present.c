#include<stdio.h>

int main()
{
    int n,i,p;
    scanf("%d",&n);
    int receive[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        receive[p-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",receive[i]);
    }

    return 0;
}