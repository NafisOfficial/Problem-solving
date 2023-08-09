#include<stdio.h>

int main()
{
    long long int n,result=0;
    scanf("%lld",&n);
    if(n%2==0)
    {
        result=n/2;
    }
    else
        result = -(n+1)/2;

    printf("%lld",result);

    return 0;
}