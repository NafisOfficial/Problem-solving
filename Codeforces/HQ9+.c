#include<stdio.h>
#include<string.h>
#define s 101

int main()
{
    char a[s];
    int i,count=0,len=0;
    scanf("%s",a);
    len = strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            printf("YES");
            break;
        }
        else
            count++;
    }
    if(count==len)
    {
        printf("NO");
    }

    return 0;
}