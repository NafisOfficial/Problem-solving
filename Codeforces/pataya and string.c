#include<stdio.h>
#include<string.h>
#define size 100

int main()
{
    char text1[size],text2[size];
    int i,l,count=0,distance;
    gets(text1);
    gets(text2);
    l=strlen(text1);
    for(i=0;i<=l;i++)
    {
        distance= text1[i]-text2[i];
        if(distance != 0 && distance != 32 && distance != -32)
        {
            if(text1[i]>='a' && text2[i]>='a' && text1[i]<='z' && text2[i]<='z')
            {
                if(text1[i]>text2[i])
                {
                    count=1;
                    break;
                }
                else
                    count=-1;
                    break;
            }
            else if(text1[i]>='A' && text2[i]>='A' && text1[i]<='Z' && text2[i]<='Z')
            {
                if(text1[i]>text2[i])
                {
                    count=1;
                    break;
                }
                else
                    count=-1;
                    break;
            }
           else if(text1[i]>='A' && text2[i]>='a' && text1[i]<='Z' && text2[i]<='z')
            {
                if(text1[i]+32>text2[i])
                {
                    count=1;
                    break;
                }
                else
                    count=-1;
                    break;
            }
            if(text1[i]>='a' && text2[i]>='A' && text1[i]<='z' && text2[i]<='Z')
            {
                if(text1[i]>text2[i]+32)
                {
                    count=1;
                    break;
                }
                else
                    count= -1;
                    break;
            }
        }
    }
    printf("%d",count);

    return 0;
}
