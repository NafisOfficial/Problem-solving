#include<stdio.h>

int main()
{
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    int count=3;
    if(a!=b && a!=c && a!=d)
    {
        count-=1;
    }
    if(b!=c && b!=d)
    {
        count-=1;
    }
    if(c!=d)
    {
        count-=1;
    }
    printf("%d",count);

    return 0;
}