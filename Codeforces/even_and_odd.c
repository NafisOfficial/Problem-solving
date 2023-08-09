#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,k,result=0,rem=0;
    scanf("%I64d%I64d",&n,&k);
    if(n%2==0)
    {
        rem=n/2;
        if(k<=rem)
        {
            result= 2*k-1;
        }
        else if(k>rem)
        {
            k = (k-rem);
            result = 2*k;
        }
    }
    else
        {
            rem=(n+1)/2;
            if(k<=rem)
            {
                result= 2*k-1;
            }
            else if(k>rem)
            {
                k = (k-rem);
                result=2*k;
            }
        }

    printf("%I64d",result);

    return 0;
}