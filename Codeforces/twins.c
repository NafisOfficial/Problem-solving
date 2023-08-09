#include<stdio.h>
int main()
{
    int n,i,j,sum=0,temp,t,result=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    t=(sum/2)+1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;result<t;i++)
    {
        result=result+a[i];
        count+=1;
    }
    
    printf("%d",count);
    

    return 0;
}