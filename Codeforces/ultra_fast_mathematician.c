#include<stdio.h>
#include<string.h>
#define size 101

int main()
{
    char a[size],b[size],rem;
    int i,len=0;
    scanf("%s%s",a,b);
    len=strlen(a);
    char result[len];
    for(i=0;i<len;i++)
    {
        if(a[i]==b[i])
        {
            result[i]='0';
        }
        else
            result[i]='1';
    }
    for(i=0;i<len;i++)
    {
        printf("%c",result[i]);
    }
    

    return 0;
}