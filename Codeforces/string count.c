#include<stdio.h>

int main()
{
    char name[100];
    gets(name);
    printf("%s\n",name);
    int i=0,count=0;
    while(name[i]!='\0')
    {
        if((name[i]>='a' && name[i]<='z') || (name[i]>='a' && name[i]<='z'))
        {
            count++;
        }
        i++;
    }
    printf("total alphabet = %d",count);



    return 0;
}
