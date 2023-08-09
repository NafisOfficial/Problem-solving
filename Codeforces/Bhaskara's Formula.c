#include<stdio.h>
#include<math.h>


int main ()
{
    double R1,R2,a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if(2*a == 0 || b*b-4*a*c<=0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-b+(sqrt((b*b)-4*a*c)))/(2*a);
        R2 = (-b-(sqrt((b*b)-4*a*c)))/(2*a);

        printf("R1 = %0.5lf\nR2 = %0.5lf\n",R1,R2);
    }


        return 0;
}
