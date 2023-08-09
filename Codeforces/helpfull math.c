#include<stdio.h>
#include<string.h>
#define size 100

int main()
{
    char num[size];
    int i,j,l,rem;
    scanf("%s",num);
    l = strlen(num);
    for(i=0;i<l-1;i=i+2)
    {
        for(j=i+2;j<l;j=j+2)
        {
            if(num[i]>num[j])
            {
                rem = num[i];
                num[i]=num[j];
                num[j]= rem;
            }
        }

    }
    puts(num);

    return 0;
}
