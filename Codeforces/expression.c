#include<stdio.h>

int main()
{
    int a,b,c,result=0;
    scanf("%d%d%d",&a,&b,&c);
    if((a==1 && b==1 && c==1)||(a==1 && b!=1 && c==1))
    {
        result = a+b+c;
    }
    else if(a==1 && b==1 && c!=1)
    {
        result=(a+b)*c;
    }
    else if(a!=1 && b == 1 && c==1)
    {
        result= a*(b+c);
    }
    else if(a==1 && b!=1 && c!=1)
    {
        result = (a+b)*c;
    }
    else if(a!= 1 && b==1 && c!=1 && a>=c)
    {
        result = a*(b+c);
    }
    else if(a!= 1 && b==1 && c!=1 && a<c)
    {
        result = (a+b)*c;
    }
    else if(a!=1 && b!=1 && c==1)
    {
        result=a*(b+c);
    }
    else
        result = a*b*c;


    
    printf("%d",result);
}