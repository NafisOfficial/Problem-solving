#include <stdio.h>

int main()
{
    int t, i, j, count = 0;
    long int a, b;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%ld%ld", &a, &b);
        if (a % b != 0)
        {
            if (a > b)
            {
                int count = b - (a % b);
                printf("%d\n", count);
                count = 0;
            }
            else{
                count = b - a;
                printf("%d\n", count);
                count = 0;
            }
        }else{
            printf("%d\n", count);
            count = 0;
        }
    }

    return 0;
}