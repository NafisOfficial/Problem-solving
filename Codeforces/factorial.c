#include<stdio.h>

int main()
{
    long long int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        fact =  fact * i;
    }
    printf("Factorial is: %lld\n",fact);

    return 0;
}
