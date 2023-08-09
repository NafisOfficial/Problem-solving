#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,x,count=0;
    scanf("%d",&n);
    char name[n];
    scanf("%s",name);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(name[i]==name[j])
            {
                count++;
            }
            else
            {
                x=j;
                break;
            }
        }
        if(name[i]==name[j])
            {
                i = count+1;
            }
    }
    printf("%d",count);
    return 0;
}
