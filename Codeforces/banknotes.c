#include<stdio.h>

int main ()
{
    long int n,a,b,c,d,e,f,g;
    scanf ("%ld",&n);
    if (0 < n < 1000000)
    {
    a = n/100;
    b = (n - (a*100))/50;
    c = (n - ((a*100)+(b*50)))/20;
    d = (n - ((a*100)+(b*50)+(c*20)))/10;
    e = (n - ((a*100)+(b*50)+(c*20)+(d*10)))/5;
    f = (n - ((a*100)+(b*50)+(c*20)+(d*10)+(e*5)))/2;
    g = (n - ((a*100)+(b*50)+(c*20)+(d*10)+(e*5)+(f*2)))/1;
    }
    printf("%ld\n%ld nota(s) de R$ 100,00\n%ld nota(s) de R$ 50,00\n%ld nota(s) de R$ 20,00\n%ld nota(s) de R$ 10,00\n%ld nota(s) de R$ 5,00\n%ld nota(s) de R$ 2,00\n%ld nota(s) de R$ 1,00\n",n,a,b,c,d,e,f,g);

    return 0;
}
