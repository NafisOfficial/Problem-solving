#include<stdio.h>

int main()
{
    long long int n,i,result=1,count=1;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(i>0)
        {
            if(a[i]>=a[i-1])
            {
                count++;
            }
            else if(count>=result)
            {
                result = count;
                count = 1;
            }
            else
                count = 1;
        }
    }
    if(count>=result)
    {
        printf("%lld",count);
    }
    else
        printf("%lld",result);


    return 0;
}