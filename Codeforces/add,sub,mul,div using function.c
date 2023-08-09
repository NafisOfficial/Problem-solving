#include<stdio.h>

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}
int mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
int div(int a, int b)
{
    int c;
    c = a /b;
    return c;
}

int main()
{
    char x[10];
    gets(x);
    int x,y;
    scanf("%d%d",&x,&y);
    switch(x)

    printf("%d\n",add(x,y));
    printf("%d\n",sub(x,y));
    printf("%d\n",mul(x,y));
    printf("%d\n",div(x,y));

    return 0;
}
