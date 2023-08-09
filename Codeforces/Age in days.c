#include<stdio.h>

int main()

{
    int n,x,y,z;
    scanf("%d",&n);

    x=(n/365);
    y=(n-(x*365))/30;
    z=(n-((x*365)+(y*30)));

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",x,y,z);

    return 0;
}
