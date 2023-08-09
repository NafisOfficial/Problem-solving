#include<stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int p1,p2,p3;
        scanf("%d%d%d",&p1,&p2,&p3);
        if((p1 && p2) || (p1 && p3) || (p2 && p3))
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
