#include<stdio.h>

int main ()
{
    int a,b,c;
    float d,e;
    scanf ("%d",&a);
    scanf ("%d%f",&b,&d);
    e = b*d;
    printf ("NUMBER = %d\n",a);
    printf ("SALARY = U$ %0.2f\n",e);

    return 0;

}
