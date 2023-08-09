#include<stdio.h>

int main()
{
    int a,b,c,d,x,y;
    printf("enter value of a,b:\n");
    scanf("%d%d",&a,&b);
    x=(2-a);
    y=(8-b);
    c=abs(2-a);
    d=abs(5-b);
    printf("x is = %d and y is = %d\n",x,y);
    printf("c is = %d and d is = %d\n",c,d);
}
