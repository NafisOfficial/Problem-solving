#include<stdio.h>
#include<math.h>

int main()
{
    int n,i=0,min,max,pM,pm,result;
    scanf("%d",&n);
    int h;
    for(i=0;i<n;i++)
    {
        scanf("%d",&h);
        if(i==0)
        {
            max= h;
            min= h;
            pM=0;
            pm=0;
        }
        if(i>0 && max<h)
        {
            max=h;
            pM = i;
        }
        if(i>0 && min>=h)
        {
            min=h;
            pm =i;
        }
    }
    result = pM+ (n-(pm+1));
    if(pM>pm)
    {
        result -=1;
        printf("%d",result);
    }
    else
        printf("%d",result);
    return 0;

}
