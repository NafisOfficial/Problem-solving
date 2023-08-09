#include<stdio.h>

int main()
{
    int n,i,v[101];
    scanf("%d",&n);
    float s=0.0,sum=0.0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        sum=sum+v[i];
    }
    s = sum/n;
    printf("%f",s);

    return 0;
}