#include <stdio.h>

int main ()
{
    int R;
    double volume,pi = 3.14159;
    scanf("%d",&R);
    volume = 1.33333333333333*pi*R*R*R;
    printf ("VOLUME = %0.3lf\n",volume);

    return 0;
}
