#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int j=0;
        char word[101];
        scanf("%s",&word);
        while(word[j]!='\0')
        {
            j++;
        }
        if(j<=10)
        {
            printf("%s\n",word);
        }
        else
            printf("%c%d%c\n",word[0],j-2,word[j-1]);
    }


    return 0;
}
