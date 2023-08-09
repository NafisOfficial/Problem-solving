#include<stdio.h>

int main()
{
    int n,a,b,m,i,j,count=0,rev=0;
    scanf("%d",&n);
    scanf("%d",&a);
    int st[a];
    count = a;
    for(i=0;i<a;i++)
    {
        scanf("%d",&st[i]);
    }
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&m);
        for(j=0;j<a;j++)
        {
            if(st[j] == m)
            {
                rev+=1;
            }
        }
    }
    count= count + (b-rev);
    if(count==n)
    {
        printf("I become the guy.");
    }
    else
        printf("Oh, my keyboard!");

    return 0;

}