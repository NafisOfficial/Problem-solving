#include<stdio.h>

int main()
{
    int n,i,x,a,b,c,d,total,mod=0,temp=0;
    total=a=b=c=d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            a++;
        }
        else if(x==2)
        {
            b++;
        }
        else if(x==3)
        {
            c++;
        }
        else if(x==4)
        {
            d++;
        }
    }
    if(c>=a)
    {
        if(b%2==0)
        {
            total = d+c+(b/2);
        }
        else
        {
            total = d+c+(b/2)+1;
        }
    }
    else if (a>c)
    {
        temp= a-c;
        if(b%2==0)
        {
            if(temp%4==0)
            {
                total = d+c+(b/2)+(temp/4);
            }
            else
            {
                total = d+c+(b/2)+(temp/4)+1;
            }
        }
        else if(b%2!=0 )
        {
            temp=temp-2;
            if(temp%4==0)
            {
                total = d+c+((b/2)+1)+(temp/4);
            }
            else if(temp>4)
            {
                total = d+c+((b/2)+1)+(temp/4)+1;
            }
            else if(temp<4)
            {
                total = d+c+((b/2)+1)+(temp/4);
            }
            
        }
    }
    printf("%d",total);
    return 0;
}