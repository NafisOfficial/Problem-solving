#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,count=1;
    char a[3],b[3];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=1;i<n;i++)
    {
        scanf("%s",b);
        if(a[0] != b[0])
        {
            count++;
            strcpy(a,b);
        }
    }
    printf("%d",count);

    return 0;
    
}