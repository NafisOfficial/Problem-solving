#include<stdio.h>

int main()
{
    int n,p,q,ans,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&p,&q);
        if(q-p>=2)
        {
            count+=1;
        }
    }
    printf("%d",count);

    return 0;

}